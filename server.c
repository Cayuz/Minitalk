/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   server.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/10 16:57:41 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 20:50:42 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handler(int signal, siginfo_t *client, void *context)
{
	static char	c;
	static int	count;

	(void) context;
	c <<= 1;
	if (signal == SIGUSR2)
		c |= 1;
	count++;
	if (count == 8 && c)
	{
		printf("%c", c);
		count = 0;
		c = 0;
	}
	else if (count == 8 && !c)
	{
		if (kill(client->si_pid, SIGUSR2) == -1)
			error_exit();
		count = 0;
		printf("\n\n");
	}
	if (kill(client->si_pid, SIGUSR1) == -1)
		error_exit();
}

int	main(void)
{
	int					pid;
	struct sigaction	signal;

	pid = getpid();
	ft_printf("PID: %i\n", pid);
	signal.sa_flags = SA_NODEFER | SA_SIGINFO;
	signal.sa_sigaction = handler;
	if (sigaction(SIGUSR1, &signal, NULL) == -1)
		return (1);
	if (sigaction(SIGUSR2, &signal, NULL) == -1)
		return (1);
	while (1)
		pause();
	return(0);
}