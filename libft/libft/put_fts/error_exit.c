/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_exit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 15:44:53 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/09 16:06:17 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	error_exit(void)
{
	ft_putstr_fd("\033[1;31mError!\033[0m\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
