/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 13:16:36 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/02/21 18:30:50 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_buf;
	const unsigned char	*s2_buf;

	i = 0;
	s1_buf = s1;
	s2_buf = s2;
	while (i < n)
	{
		if (s1_buf[i] < s2_buf[i])
			return (-1);
		if (s1_buf[i] > s2_buf[i])
			return (1);
		i++;
	}
	return (0);
}
