/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/22 15:11:10 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/09 16:24:18 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = (t_list *)ft_malloc(sizeof(t_list));
	node->value = content;
	node->index = 0;
	node->next = NULL;
	return (node);
}
