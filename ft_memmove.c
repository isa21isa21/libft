/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:14 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:34:23 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (((char*)dst > (char*)src))
	{
		while (n--)
			(((char*)dst)[n]) = (((char*)src)[n]);
	}
	else
		while (i < n)
		{
			(((char*)dst)[i] = (((char*)src)[i]));
			i++;
		}
	return (dst);
}
