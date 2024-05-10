/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put_array.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 14:04:09 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 16:44:14 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	put_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		ft_printf("%s\n", array[i]);
		i++;
	}
}
