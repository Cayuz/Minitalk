/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   client.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/10 20:15:59 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/15 18:57:48 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

static int g_received = 0;

static void	converter(int pid, char c)
{
	int	b;
	int	check;
	int	i;

	i = 7;
	while(i >= 0)
	{
		b = (1 & (c >> i));
		if (b == 0)
			check = kill(pid, SIGUSR1);
		else
			check = kill(pid, SIGUSR2);
		if (check == -1)
			error_exit();
		while (!g_received)
			;
		g_received = 0;
		i--;
	}
}

static void	received(int signal)
{
	(void)signal;
	g_received = 1;
}

static void	success(int signal)
{
	(void)signal;
	ft_printf("Message received!\n");
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	pid = ft_atoi(av[1]);
	if (ac != 3)
		return (ft_printf("invalid (number of) argument(s)\n"));
	if (!isdigit_char(av[1]))
		return (ft_printf("nope.\n"));
	signal(SIGUSR1, &received);
	signal(SIGUSR2, &success);
	while (av[2][i])
	{
		converter(pid, av[2][i]);
		i++;
	}
	converter(pid, 0);
	return (0);
}
