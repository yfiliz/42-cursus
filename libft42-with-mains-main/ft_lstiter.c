/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:31:45 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/10 13:59:03 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	fonk(void *s)
{
	printf("%s\n", s);
}
int	main()
{
	t_list	*i;
	t_list	*b;
	t_list	*p;

	i = ft_lstnew("hello");
	b = ft_lstnew("world");
	p = ft_lstnew("yusuf");
	ft_lstadd_back(&i, b);
	ft_lstadd_back(&b, p);
	ft_lstiter(i, fonk);
	return (0);
}*/
