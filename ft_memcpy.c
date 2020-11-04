/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:11 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:33:18 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	while (n--)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
