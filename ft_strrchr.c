/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquickbe <cquickbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:26:47 by cquickbe          #+#    #+#             */
/*   Updated: 2020/11/04 20:06:04 by cquickbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	char *str = "strinrg";
	printf("\nTest de ft_strrchr :\n");
	printf("%p : %p\n", strrchr(str, '\0'), ft_strrchr(str, '\1'));
	printf("%p : %p\n", strrchr(str, 'r'), ft_strrchr(str, 'r'));
}