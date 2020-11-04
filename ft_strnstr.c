/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:45 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 19:41:51 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strB, const char *strA, size_t len)
{
	int i;
	int a;
	int b;

	i = 0;
	b = 0;
	if (strA == 0)
		return ((char*)strB);
	while (strA[i] != '\0' && i < len)
	{
		while (strA[i] != (*strB + b))
			b++; 
		
		if (strB + b == '\0')
			return (&((char*)strB)[i]);
	}
	return (NULL);
}
