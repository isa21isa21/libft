/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:09 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/09 19:58:06 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && ((unsigned char*)arr1)[i] == ((unsigned char*)arr2)[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char*)arr1)[i] - ((unsigned char*)arr2)[i]);
}
