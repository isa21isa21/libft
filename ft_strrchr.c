/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:47 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 20:06:04 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen(str);
	while (str[len - 1] != 0)
	{
		if (str[len] == c)
			return (&((char*)str)[len]);
		len--;
	}
	return (NULL);
}
