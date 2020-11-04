/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:34 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 19:42:02 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	if (size == 0)
		return (i);
	while (src[i] != '\0')
		i++;
	while (src[j] != '\0' && j < (size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}
