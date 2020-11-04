/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:54:42 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 20:11:59 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

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

int my_end(char const *s1, char const *set)
{
    int endlen;
    int schetchik;

    schetchik = 0;
    endlen = ft_strlen(s1);
    while (s1[endlen] == (char)set)
    {
        endlen--;
        schetchik++;
    }
    return (endlen - schetchik);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int len;
    int set_i;
    
    start = 0;
    set_i = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[start] == (char)set)
        start++;
    return (ft_substr(s1, start, (my_end(s1, set) - start)));
}

int     main(void)
{
    printf("\nTest de ft_strtrim :\n");
	printf("'bonjour' : %s\n", ft_strtrim("bonjour", " "));
	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour ", " "));
	printf("'onjour' : '%s'\n", ft_strtrim(" bonjour ", " b"));
	printf("'bonjour' : '%s'\n", ft_strtrim(" bonjour", " "));
	printf("'bonjour' : '%s'\n", ft_strtrim("bonjour ", " "));
	printf("'onjou' : '%s'\n", ft_strtrim("bonjour ", "br "));
	printf("'' : '%s'\n", ft_strtrim("", " "));
	printf("'test' : '%s'\n", ft_strtrim("test", ""));
	printf("'te st' : '%s'\n", ft_strtrim(" te st ", " "));
	printf("'' : '%s'\n", ft_strtrim(" b  ", "b "));
}