/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/10 19:00:59 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 19:41:15 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

long	ft_atol(const char *nptr)
{
	int		i;
	int		s;
	long	r;

	i = 0;
	s = 1;
	r = 0;
	if (!nptr)
		return (0);
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		r = r * 10 + nptr[i] - '0';
		i++;
	}
	return (r * s);
}
