/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 17:58:36 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/04/18 17:15:07 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*
-	Deletes and frees the given node and every
	successor of that node, using the function ’del’
	and free(3).

-	Finally, the pointer to the list must be set to
	NULL.
*/

void	ft_lstclear(t_liblist **lst, void (*del)(void *))
{
	t_liblist	*current;
	t_liblist	*next;

	current = *lst;
	if (!current || !del)
		return ;
	while (current && current->next)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	ft_lstdelone(current, del);
	*lst = NULL;
}
