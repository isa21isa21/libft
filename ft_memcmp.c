/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:09 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:31:59 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		if (((unsigned char*)arr1)[i] == ((unsigned char*)arr2)[i])
			i++;
		else if (((unsigned char*)arr1)[i] > ((unsigned char*)arr2)[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}
