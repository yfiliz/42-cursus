/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:05:22 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/13 15:48:50 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
		if (number > 2147483647 && sign == 1)
			return (-1);
		if (number < -2147483648 && sign == -1)
			return (0);
	}
	if (sign == -1)
		number *= sign;
	return (number);
}
/*
int main()
{
	printf("%d", ft_atoi("     -658hfc345"));
}*/
