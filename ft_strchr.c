/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:22 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:35:48 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (*str == c)
		return ((char*)str);
	while (*str)
	{
		str++;
		if (*str == c)
			return ((char*)str);
	}
	return (NULL);
}
