/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:30:16 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/10 14:29:55 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	t_list	*s;
	s = ft_lstnew("selamlar");
	s->next = ft_lstnew("yusuf");
	printf("%d\n", ft_lstsize(s));
	printf("ilk content: %s, ikinci content: %s", s->content, s->next->content);
}*/
