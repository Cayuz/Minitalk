/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/18 18:02:12 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/02/21 18:28:59 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

static int	n_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		counter++;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n, int base)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc ((n_count(n) + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	i = n_count(n) - 1;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = n % base + '0';
		n /= base;
		i--;
	}
	return (str);
}
