/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makelist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:36:59 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 10:14:04 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	makelist(t_list *b, t_list *a)
{
	t_list *ptr;

	ptr = a;
	while (ptr != NULL)
	{
		if (ptr == NULL)
		{
			ft_putstr("QQ");
		/*	if (b == NULL)
			{
				ft_putstr("WW");
			}
			else
			{
				ft_putchar(' ');
				ft_putnbr(b->data);
				b = b->next;
			}*/
		}
		else
		{
			ft_putnbr(ptr->data);
			/*if (b != NULL)
			{
				ft_putchar(' ');
				ft_putnbr(b->data);
				b = b->next;
			}
			else
			{
				ft_putstr("RR");
			}*/
			ft_putchar('\n');
			ptr = ptr->next;
		}
	}
	ft_putstr("- -\n");
	ft_putstr("a b\n");
}
