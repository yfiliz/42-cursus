/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:55:49 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/10 16:25:48 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s1);
	s2 = malloc(i + 1);
	if (!(s2))
		return (NULL);
	ft_memcpy(s2, s1, i);
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	a[] = "merhabalar";
	printf("%s", ft_strdup(a));
}*/
