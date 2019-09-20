/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makelist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:36:59 by odooms            #+#    #+#             */
/*   Updated: 2019/09/20 14:12:16 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	makelist(struct s_list *B, struct s_list *A)
{
	struct s_list *ptr = A;

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
