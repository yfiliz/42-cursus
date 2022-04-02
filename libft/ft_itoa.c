/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:21:42 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/14 17:01:36 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		c;

	c = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	str = malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	while (len >= 0)
	{
		str[len--] = (n % 10) + 48;
		n /= 10;
	}
	if (c > 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(2341));
}*/
