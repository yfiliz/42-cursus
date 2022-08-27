/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:12:20 by yfiliz            #+#    #+#             */
/*   Updated: 2022/08/28 01:40:19 by yfiliz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signall(int pid, char *str)
{
	int	i;
	int	b;

	while (*str)
	{
		i = 0;
		b = 8;
		while (b--)
		{
			if (str[i] >> b & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep (50);
		}
		str++;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pd;

	if (ac != 3)
	{
		write (1, "Input 3 arguments.\n", 20);
		return (0);
	}
	pd = ft_atoi(av[1]);
	signall (pd, av[2]);
}
