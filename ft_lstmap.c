/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:56:33 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/10 17:16:45 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list *lstnew;
	t_list *lstsave;

	if (!lst || !f)
		return (NULL);
	lstnew = ft_lstnew(f(lst->content));
	if (!lstnew)
		return (NULL);
	lstsave = lstnew;
	while (lst->next)
	{
		lst = lst->next;
		lstnew->next = ft_lstnew(f(lst->content));
		if (!lstnew->next)
		{
			ft_lstclear(&lstsave, del);
			return (NULL);
		}
		lstnew = lstnew->next;
	}
	return (lstsave);
}
