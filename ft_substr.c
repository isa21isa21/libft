/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:50 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 19:47:27 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len-- && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
