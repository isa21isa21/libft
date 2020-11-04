#include <stdio.h>
#include <stdlib.h>

int strnum(char const *s, char c)
{
    int i;
    int cnum;

    i = 0;
    cnum = 0;
    while (s[i])
    {
        if (s[i] == c)
            cnum++;
        i++;
    }
    return (cnum);
}


char **ft_split(char const *s, char c)
{
    int cnum;
    int i;
    int j;
    int colvo;
    char **str;
    
    i = 0;
    j = 0;
    cnum = strnum(s, c);
    if(!(str = (char**)malloc(sizeof(char*) * cnum)))
        return (NULL);
    while (s)
    {
        
        while(*(s + i) != c)
            i++;
        i++;
        if(!(str[j] = (char*)malloc(sizeof(char) * i)))
            return (NULL);
        i = 0;
        while (*(s + i) != c)
        {
            str[j][i] = *(s + i);
            i++;
        }
        i++;
        j++;
    }
    return (str);
}

int     main(void)
{
   	printf("%s", ft_split("Hello*world*how*are*u!", '*'));
    return (0);
}