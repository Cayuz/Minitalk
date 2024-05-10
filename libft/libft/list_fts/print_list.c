/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_list.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 18:21:18 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 16:44:04 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	print_list(t_list **head)
{
	t_list	*temp;

	if (!(*head))
	{
		ft_printf("list is empty\n");
		return ;
	}
	temp = *head;
	while (temp)
	{
		ft_printf("value: %i\n", temp->value);
		ft_printf("index: %i\n", temp->index);
		temp = temp->next;
	}
}
