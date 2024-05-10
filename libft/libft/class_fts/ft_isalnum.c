/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:22:49 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 17:48:17 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

bool	ft_isalnum(int a)
{
	if (ft_isalpha(a) || ft_isdigit(a))
		return (true);
	return (false);
}
