/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/21 11:17:33 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/01/23 15:34:26 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(const char *str, va_list args)
{
	int	len;

	len = 0;
	if (*str == '%')
		return (len + print_c('%'));
	if (*str == 'c')
		return (len + print_c(va_arg(args, int)));
	if (*str == 's')
		return (len + print_s(va_arg(args, char *)));
	if (*str == 'd' || *str == 'i')
		return (len + print_int(va_arg(args, int), *str, 10));
	if (*str == 'u')
		return (len + print_int(va_arg(args, int), *str, 10));
	if (*str == 'p')
		return (len + print_p(va_arg(args, void *)));
	if (*str == 'x')
		return (len + print_int(va_arg(args, int), *str, 16));
	if (*str == 'X')
		return (len + print_int(va_arg(args, int), *str, 16));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	if (!str)
		return (print_s("(null)"));
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			len += conversion(str, args);
		}
		else
			len += print_c(*str);
		str++;
	}
	va_end(args);
	return (len);
}
// int main(void)
// {
// 	ft_printf("• c: print single character test\n");
// 	char character = 'a';
// 	ft_printf("  my printf: %c\n", character);
// 	printf("  og printf: %c\n\n", character);

// 	ft_printf("• s: print string test\n");
// 	char *string = "hallo";
// 	ft_printf("  my printf: %s\n", string);
// 	printf("  og printf: %s\n\n", string);

// 	ft_printf("• %: double percentage sign test\n");
// 	ft_printf("  my printf: %%\n");
// 	printf("  og printf: %%\n\n");

// 	ft_printf("• i: print integer in base 10 test\n");
// 	int	num = 543;
// 	ft_printf("  my printf: %i\n", num);
// 	printf("  og printf: %i\n\n", num);

// 	ft_printf("• d: print decimal in base 10 test\n");
// 	int	decml = 42;
// 	ft_printf("  my printf: %d\n", decml);
// 	printf("  og printf: %d\n\n", decml);

// 	ft_printf("• u: print unsigned int in base 10 test\n");
// 	int	unsint = -123;
// 	ft_printf("  my printf: %u\n", unsint);
// 	printf("  og printf: %u\n\n", unsint);

// 	ft_printf("• x: print hexadecimal in base 16 lowercase test\n");
// 	int	hex_lowcase = 9586842;
// 	ft_printf("  my printf: %x\n", hex_lowcase);
// 	printf("  og printf: %x\n\n", hex_lowcase);

// 	ft_printf("• X: print hexadecimal in base 16 uppercase test\n");
// 	int	hex_upcase = 9586842;
// 	ft_printf("  my printf: %X\n", hex_upcase);
// 	printf("  og printf: %X\n\n", hex_upcase);

// 	ft_printf("• p: print pointer test\n");
// 	char *pointer = "h";
// 	ft_printf("  my printf: %p\n", pointer);
// 	printf("  og printf: %p\n\n", pointer);
// }