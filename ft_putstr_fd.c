#include <unistd.h>

void ft_putstr(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}