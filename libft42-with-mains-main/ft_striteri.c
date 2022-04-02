/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:27:55 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/15 20:28:17 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	f(unsigned int x, char *c)
{
	if(c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;
}
int	main(void)
{
	char	a[] = "merhaba";
	ft_striteri(a, f);
	printf("%s", a);
}*/