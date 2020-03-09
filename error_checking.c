#include "push_swap.h"

void Duplicates(t_list *head)
{
    t_list *current = head;
    if (current == NULL)
    {
        ft_putstr("ERROR");
        ft_putchar('\n');
        return;
    }
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            ft_putstr("ERROR (duplicates)");
            ft_putchar('\n');
            return;
        }
        else
        {
            current = current->next;
        }   
    }
}