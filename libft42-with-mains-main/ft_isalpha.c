/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:16:15 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/05 14:44:43 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalpha('3'));
}
*/
