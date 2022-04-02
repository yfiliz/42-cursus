/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:58:41 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/14 17:29:36 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	while (*src && i + 1 < dstsize)
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[11] = "yusuf";
	char b[] = "halim";
	printf("%lu", ft_strlcat(a, b, 15));
}*/
