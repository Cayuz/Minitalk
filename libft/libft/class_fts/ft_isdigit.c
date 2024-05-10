/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:19:45 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/09 16:23:54 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

bool	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (true);
	return (false);
}
