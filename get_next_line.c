/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:06:41 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/16 15:25:25 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}

char *ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (!src || !dst || size == 0)
		return (i);
	while (src[j] != '\0' && j < (size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

char	*ft_strdup(const char *src)
{
	char *dst;

	if (!(dst = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strlcpy(dst, (char*)src, ft_strlen(src) + 1);
	return (dst);
}

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (*str == c)
		return ((char*)str);
	while (*str)
	{
		str++;
		if (*str == c)
			return ((char*)str);
	}
	return (NULL);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s1) +
									ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char *rem_variable(char **line, char *rem)
{
	char *newline_pointer;

	newline_pointer = NULL;
	if (rem)
		if ((newline_pointer = ft_strchr(rem, '\n')))
		{
			*newline_pointer = '\0';
			*line = ft_strdup(rem);
			ft_strcpy(rem, ++newline_pointer);
		}
		else
		{
			*line = ft_strdup(rem);
			ft_strclr(rem);
		}
	else
		*line = ft_strnew(1);
	return (newline_pointer);
}


int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE];
	char *newline_pointer;
	char *prev_line;
	static char *rem;
	int	bytes_read;

	if (BUFFER_SIZE <= 0)
		return (-1);
	if (!line || fd < 0)
		return (-1);
	newline_pointer = rem_variable(line, rem);
	while (!newline_pointer && (bytes_read = read(fd, buf, BUFFER_SIZE)))//ext'\0'availab'\0'
	{
		buf[bytes_read] = 0;
		if ((newline_pointer = ft_strchr(buf, '\n')))
		{
			*newline_pointer = '\0';
			rem = ft_strdup(++newline_pointer);
		}
		prev_line = *line;
		*line = ft_strjoin(*line, buf);
		free(prev_line);
	}
	return (0);
}

int main(void)
{
	char *line;
	int	fd;
	
	fd = open("hello.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	return (0);
}