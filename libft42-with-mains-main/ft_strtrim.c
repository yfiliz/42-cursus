/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:57:11 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/15 20:37:26 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *) s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	while (ft_strchr(set, s1[end]) && end != '\0')
		end--;
	if ((int)(end - start + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, start, (end - start) + 1));
}
/*
#include <stdio.h>

int main()
{
	printf("%s\n", ft_strtrim("selam naber iyi sen", "lsena"));
}*/
