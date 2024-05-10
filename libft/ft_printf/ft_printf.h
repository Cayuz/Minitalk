/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/21 13:50:37 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/01/23 15:53:14 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

int	print_c(char c);
int	print_s(char *str);
int	print_p(void *ptr);
int	print_int(long int nbr, char c, int base);

int	conversion(const char *str, va_list args);
int	ft_printf(const char *str, ...);

#endif