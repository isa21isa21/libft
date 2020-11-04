/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:06 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:05:36 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		if ((((char*)arr)[i]) == c)
			return ((char*)arr + i);
		else
			i++;
	}
	return (NULL);
}
