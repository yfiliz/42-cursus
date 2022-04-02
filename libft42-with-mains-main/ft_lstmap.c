/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfiliz <yfiliz@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:31:57 by yfiliz            #+#    #+#             */
/*   Updated: 2022/02/10 14:24:43 by yfiliz           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (result);
}
/*
void	*f(void *s)
{
	return (s);
}
void	del(void *s)
{
	s = 0;
}
void	iter(void *s)
{
	printf("%s\n", (char *)s);
}
int	main()
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("hello");
	b = ft_lstnew("world");
	ft_lstadd_back(&a, b);
	c = ft_lstmap(a, f, del);
	ft_lstiter(c, iter);
	return (0);
}*/
