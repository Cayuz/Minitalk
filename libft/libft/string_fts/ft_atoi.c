/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 14:26:55 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 21:32:32 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	r;

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
