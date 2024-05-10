/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_array.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:17:53 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/04/18 19:28:31 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (array)
	{
		while (array && array[i])
		{
			free(array[i]);
			i++;
		}
	}
	free(array);
}
