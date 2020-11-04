/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:25 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:36:00 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strdup(const char *src)
{
	char *dst;

	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strlcpy(dst, (char*)src, ft_strlen(src) + 1);
	return (dst);
}
