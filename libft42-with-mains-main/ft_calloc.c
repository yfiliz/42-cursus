/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:28:58 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/15 20:44:31 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (p);
	ft_bzero(p, count * size);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char *a;
	a = (char *)ft_calloc(1,1);
	printf("%c", *a);
}*/
