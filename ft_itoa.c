#include <stdlib.h>
#include <stdio.h>
int	numlen(int numb)
{
	int len;

	len = 0;

	if (numb < 0)
	{
		numb *= -1;
		len ++;
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
	char *str;
	int i;
	int len;
	int lastnum;

	len = numlen(n);	
	i = 0;
	if(!(str = (char*)malloc(sizeof(char) * (len + 1 ))))
		return (NULL);
	str[len] = 0;
	if (n == 0)
		return ("0");
	if (n < 0 && (n *= -1))
		str[i] = '-';
	while (n != 0)
	{	
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}


int		main(void)
{
	printf("%s", ft_itoa(-123456678));
	return (0);
}
