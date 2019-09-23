/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 10:56:28 by odooms            #+#    #+#             */
/*   Updated: 2019/09/23 14:16:30 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker(struct s_list *A, struct s_list *B)
{
	struct s_list *i = A;
	struct s_list *j;
	int temp;
	while (i->next != NULL)
	{
		j = i->next;
		while(j != NULL)
		{
			if(i->data > j->data)
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
			j = j->next;
		}
		i = i->next;
	}
	makelist(B, A);
	write(1, "OK\n", 3);
}
