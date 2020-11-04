#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *newcont;

    if(!(newcont = malloc(sizeof(t_list))))
        return (NULL);
    if (!content)
        newcont->content = NULL;
    newcont->content = content;
    newcont->next = NULL;
    return (newcont);
}