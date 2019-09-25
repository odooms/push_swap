/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makelist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:36:59 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 13:54:06 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	makelist(t_list *B, t_list *A)
{
	t_list *ptr = A;

	while (ptr != NULL)
	{
		ft_putnbr(ptr->data);
		if (B != NULL)
		{
			ft_putchar(' ');
			ft_putnbr(B->data);
			B = B->next;
		}
		else
		{
			ft_putstr("  ");
		}
		ft_putchar('\n');
		ptr = ptr->next;
	}
	ft_putstr("- -\n");
	ft_putstr("a b\n");
}
