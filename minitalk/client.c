/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:49:43 by oozcan            #+#    #+#             */
/*   Updated: 2022/04/12 11:49:45 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send(int pid, char c)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (c >> i) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		--i;
		usleep(150);
	}
}

void	message_char(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_send(pid, str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc < 3)
		ft_putstr(PIDERROR);
	if (argc > 3)
		ft_putstr(ARGERROR);
	pid = ft_atoi(argv[1]);
	message_char(pid, argv[2]);
	return (0);
}
