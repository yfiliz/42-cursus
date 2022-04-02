/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:28:54 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/15 17:44:35 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>

int	main(void)
{
	int fd = open("mrb.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("merhaba selam", fd);
}*/
