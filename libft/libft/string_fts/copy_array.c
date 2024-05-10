/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   copy_array.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:24:10 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/04/18 19:28:17 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	**copy_array(char **array, int size)
{
	char	**copy;
	int		i;

	i = 0;
	copy = (char **)ft_malloc(size * sizeof(char *));
	while (i < size - 1)
	{
		copy[i] = ft_strdup(array[i]);
		if (!copy[i])
		{
			free_array(copy);
			error_msg("oopsiesss");
		}
		i++;
	}
	copy[i] = NULL;
	return (copy);
}
