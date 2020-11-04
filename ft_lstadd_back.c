/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:48:23 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 20:55:23 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *list;
    if(!list)
        return (NULL);
    while (list->next)
    {
        list = list->next;
    }
    list->next = new;
}
