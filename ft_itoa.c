/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:12:02 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/11 15:37:14 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		numlen(int numb)
{
	int len;

	len = 0;
	if (numb < 0)
	{
		numb *= -1;
		len++;
	}
	while (numb != 0)
	{
		numb = numb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	len;
	long	num;

	num = n;
	len = numlen(n);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = 0;
	if (num == 0)
	{
		str[i] = (num % 10) + '0';
		return (str);
	}
	if (num < 0 && (num *= -1))
		str[i] = '-';
	while (num != 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
