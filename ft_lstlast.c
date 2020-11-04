/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:21:41 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 20:26:59 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

int main(void)
{
    t_list	*begin;
    printf("\nTest de ft_lstlast :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");

}