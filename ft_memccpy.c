/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:04 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:05:14 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*((char*)dest + i) = *((char*)src + i);
		i++;
		if (((char*)dest)[i - 1] == (char)c)
			return (((char*)dest) + i);
	}
	return (NULL);
}
