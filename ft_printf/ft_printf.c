/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:20:33 by yfiliz            #+#    #+#             */
/*   Updated: 2022/03/17 20:19:53 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uhex(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_print_uhex(n / 16);
		i = i + ft_print_uhex(n % 16);
	}
	else
	{
		if (n < 10)
			i = i + ft_printchar(n + '0');
		else
			i = i + ft_printchar('A' + n - 10);
	}
	return (i);
}

int	ft_print_dhex(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i = i + ft_print_dhex(n / 16);
		i = i + ft_print_dhex(n % 16);
	}
	else
	{
		if (n < 10)
			i = i + ft_printchar(n + '0');
		else
			i = i + ft_printchar('a' + n - 10);
	}
	return (i);
}

int	ft_type(const char c, va_list *ap)
{
	if (c == 'c')
		return (ft_printchar(va_arg(*ap, int)));
	if (c == 's')
		return (ft_printstr(va_arg(*ap, char *)));
	if (c == 'p')
	{
		ft_printstr("0x");
		return (ft_print_pointer(va_arg(*ap, unsigned long long)) + 2);
	}
	if (c == 'd' || c == 'i')
		return (ft_printnmb(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_print_unsg_nmb(va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_print_dhex(va_arg(*ap, unsigned int)));
	if (c == 'X')
		return (ft_print_uhex(va_arg(*ap, unsigned int)));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		say;
	int		i;

	i = 0 ;
	say = 0 ;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			say += ft_printchar(s[i]);
		}
		else
		{
			say += ft_type(s[i + 1], &ap);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (say);
}
/*
#include <stdio.h>

int	main()
{
	ft_printf("s --> %s\n", "yusuf filiz");
	ft_printf("c --> %c\n", 'a');
	ft_printf("d --> %d\n", 123);
	ft_printf("i --> %i\n", 4234);
	ft_printf("x --> %x\n", 23423);
	ft_printf("X --> %X\n", 342);
	ft_printf("p --> %p\n", 777);
	ft_printf("u --> %u\n", 896986428952);
	ft_printf("percent --> %%%%%\n");
}*/
