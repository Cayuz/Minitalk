/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 14:38:14 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/02/21 17:52:15 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_putnbr(int n)
{
	char		c;
	long int	ln;

	ln = (long int)n;
	if (ln < 0)
	{
		write(1, "-", 1);
		ln *= -1;
	}
	if (ln > 9)
		ft_putnbr(ln / 10);
	c = '0' + (ln % 10);
	write(1, &c, 1);
}
