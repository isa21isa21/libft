/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:12:21 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/11 17:28:16 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strnum(char const *s, char c)
{
	int cnum;
	int i;

	i = 0;
	cnum = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			cnum++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (cnum);
}

static void	memclear(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
	}
	free(str);
}

static char	**madecopy(char **str, char const *s, char c, int cnum)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	while (j < cnum)
	{
		size = 0;
		while (*(s + i) == c)
			i++;
		while (*(s + i + size) != c && *(s + i + size))
			size++;
		str[j] = ft_substr(s, i, size);
		if (!str[j])
		{
			memclear(str);
			return (NULL);
		}
		i += size;
		j++;
	}
	return (str);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		cnum;

	if (!s)
		return (NULL);
	cnum = strnum(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (cnum + 1))))
		return (NULL);
	*(str + cnum) = 0;
	madecopy(str, s, c, cnum);
	return (str);
}
