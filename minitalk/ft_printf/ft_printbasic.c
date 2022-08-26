/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbasic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:19:19 by yfiliz            #+#    #+#             */
/*   Updated: 2022/03/17 20:20:19 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *s)
{
	unsigned int	i;
	char			c;

	i = 0;
	if (s == NULL)
		return (ft_printstr("(null)"));
	while (*s)
	{
		c = *s++;
		write(1, &c, 1);
		i++;
	}
	return (i);
}

int	ft_printnmb(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	if (n < 0)
	{
		i = i + ft_printchar('-');
		i = i + ft_printnmb(-n);
	}
	else if (n >= 10)
	{
		i = i + ft_printnmb(n / 10);
		i = i + ft_printchar(n % 10 + '0');
	}
	else
		i = i + ft_printchar(n + '0');
	return (i);
}

int	ft_print_unsg_nmb(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i = i + ft_printnmb(n / 10);
		i = i + ft_printnmb(n % 10);
	}
	else
		i = i + ft_printchar(n + '0');
	return (i);
}

int	ft_print_pointer(unsigned long long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_print_pointer(n / 16);
		i = i + ft_print_pointer(n % 16);
	}	
	else
	{
		if (n % 16 < 10)
			i = i + ft_printchar((n % 16) + '0');
		else
			i = i + ft_printchar('a' + ((n % 16) - 10));
	}
	return (i);
}
