/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_msg.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 17:13:52 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/09 15:50:31 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	error_msg(char *msg)
{
	ft_printf("\033[1;31mError!\033[0m\n%s\n", msg);
	exit(EXIT_FAILURE);
}
