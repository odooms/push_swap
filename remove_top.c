/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:59:33 by odooms            #+#    #+#             */
/*   Updated: 2019/09/10 14:37:08 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_list	remove_top(struct s_list *top)
{
	struct s_list *move = top;
	top = top->next;
	move->next = top;
	if (move == top)
		top = NULL;
	free(move);
	return (*top);
}
