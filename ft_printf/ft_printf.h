/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:15:48 by yfiliz            #+#    #+#             */
/*   Updated: 2022/03/17 20:16:07 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(char *s);
int	ft_printnmb(int n);
int	ft_print_unsg_nmb(unsigned int n);
int	ft_print_pointer(unsigned long long n);
int	ft_printf(const char *s, ...);
int	ft_print_uhex(unsigned int n);
int	ft_print_dhex(unsigned int n);
int	ft_type(const char c, va_list *ap);

#endif
