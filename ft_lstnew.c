#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newnode;

    if(!(newnode = malloc(sizeof(t_list))))
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}
