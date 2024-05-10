/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/21 14:23:57 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/01/23 15:22:44 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(char c)
{
	return (write(1, &c, 1));
}

int	print_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_p(void *ptr)
{
	unsigned long	p;
	int				len;

	p = (unsigned long)ptr;
	len = 0;
	if (ptr == NULL)
		return (len + print_s("(nil)"));
	if (p >= 16)
		len += print_p((void *)(p / 16));
	if (len == 0)
		len += print_s("0x");
	p %= 16;
	if (p < 10)
		len += print_c(p + '0');
	else
		len += print_c(p + ('a' - 10));
	return (len);
}

int	print_int(long nbr, char c, int base)
{
	int	len;

	len = 0;
	if (c == 'u' || c == 'x' || c == 'X')
		nbr = (unsigned) nbr;
	if (nbr < 0 && base <= 10)
	{
		len += print_c('-');
		nbr = -nbr;
	}
	if (nbr >= base)
		len += print_int(nbr / base, c, base);
	nbr %= base;
	if (nbr < 10)
		len += print_c(nbr + '0');
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			len += print_c(nbr + ('a' - 10));
		else if (c == 'X')
			len += print_c(nbr + ('A' - 10));
	}
	return (len);
}
