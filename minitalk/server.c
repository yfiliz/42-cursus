/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:13:14 by yfiliz            #+#    #+#             */
/*   Updated: 2022/08/26 05:10:11 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static char	x = 0;
	static int	n = 0;

	if (sig == SIGUSR1)
	{
		x = x | 1;
	}
	n++;
	if (n == 8)
	{
		write (1, &x, 1);
		n = 0;
		x = 0;
	}
	else
		x <<= 1;
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
