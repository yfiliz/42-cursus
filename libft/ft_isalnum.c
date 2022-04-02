/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:04:08 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/16 17:36:33 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	return (ft_isdigit(str) || ft_isalpha(str));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isalnum('a'));
}*/
