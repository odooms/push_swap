#include "push_swap.h"

//void	Duplicates(t-list *head)
int	Duplicates(t_list *head)
{
    t_list *current = head;
    while (current->next != NULL)
    {
        if (current->data == current->next->data)
        {
	//	ft_putstr("ERROR (duplicates)");
	//	ft_putchar('\n');
		return(die("ERROR"));
        }
       // else
        //{
            current = current->next;
        //}   
    }
    return(0);
}
