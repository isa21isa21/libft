/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:54:42 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/10 17:19:22 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		my_start(char const *s1, char const *set)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) != NULL)
			counter++;
		else
			break ;
		i++;
	}
	return (counter);
}

int		my_end(char const *s1, char const *set)
{
	int counter;
	int len;

	counter = 0;
	len = ft_strlen(s1);
	len--;
	while (s1[len])
	{
		if (ft_strchr(set, s1[len]) != NULL)
			counter++;
		else
			break ;
		len--;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		len;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = my_start(s1, set);
	end = my_end(s1, set);
	if (start == len)
	{
		s = malloc(sizeof(char));
		s[0] = '\0';
		return (s);
	}
	return (ft_substr(s1, start, len - start - end));
}
