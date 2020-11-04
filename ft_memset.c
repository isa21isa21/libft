/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:17 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 18:34:52 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*ft_memset(void *dest, int c, size_t n)
{
	char *l;

	l = (char *)dest;
	while (n-- > 0)
		l[n] = c;
	return (dest);
}
