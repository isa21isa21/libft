
int ft_lstsize(t_list *lst)
{
    int i;
    t_list *now;

    i = 0;
    now = lst;
    while (now)
    {
        now = now->next;
        i++;
    }
    return (i);
}