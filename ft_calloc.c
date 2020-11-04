/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:25:44 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 17:55:32 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * (num * size))))
		return (NULL);
	ft_memset(str, 0, num * size);
	return (str);
}
