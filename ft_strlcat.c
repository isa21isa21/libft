/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:32 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:14:32 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sum;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (ft_strlen(dst) > size)
		return (size + ft_strlen((char*)src));
	sum = ft_strlen(dst) + ft_strlen(src);
	if (size > 0)
	{
		while (src[j] && ft_strlen(dst) < (size - 1))
		{
			dst[i] = src[j];
			j++;
			i++;
		}
	}
	dst[i] = '\0';
	return (sum);
}
