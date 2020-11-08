#include <stdio.h>
#include <stdlib.h>

int strnum(char const *s, char c)
{
    int flag;
    int cnum;
    int i;

    i = 0;
    cnum = 0;
    while (s[i] != 0)
    {
        if (s[i] != c)
        {
            cnum++;
            while (s[i] != c)
                i++;
        }
        i++;
    }
    return (cnum);
}

void    memfree(char **str, int wordnum)
{
    int i;

    i = 0;
    while (i < wordnum)
    {
        free(*(str + i));
        i++;
    }
    free(str);
}

void    strcopy(char **str, char const *s, char c, int wordnum)
{
    int i;
    int size;

    i = 0;

}

char **ft_split(char const *s, char c)
{
    char    **str;
    int     i;
    int     wordnum;
    
    i = 0;
    wordnum = strnum(s, c);
    if(!(str = (char**)malloc(sizeof(char*) * (wordnum + 1))))  //" Hello***world***how  * are"
        return (NULL);
    if (!str)
        return (NULL);
    
    return (str);
}

int     main(void)
{
   	printf("%d", ft_split("Hello***world***how  * are", 'c'));
    return (0);
}