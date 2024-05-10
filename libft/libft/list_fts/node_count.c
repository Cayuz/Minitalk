/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_count.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 13:39:22 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/09 16:24:28 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	node_count(t_list **head)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = *head;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
