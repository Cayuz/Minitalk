/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isdigit_char.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/15 16:18:25 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/17 13:25:44 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

bool	isdigit_char(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}
