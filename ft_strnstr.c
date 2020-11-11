/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:45 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/09 20:48:55 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (str[i] == '\0' && find[i] == '\0')
		return ((char *)&str[0]);
	while (str[i] && i <= len)
	{
		while (str[i + j] == find[j] && find[j] && (i + j) < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&str[i]);
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}
