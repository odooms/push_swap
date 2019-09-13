/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:15:54 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 09:39:02 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_list	remove_bottom(struct s_list *bottom)
{
	struct s_list *move = bottom;
	struct s_list *back = NULL;
	while (move->next != NULL)
	{
		back = move;
		move = move->next;
	}
	if (back != NULL)
		back->next = NULL;
	if (move == bottom)
		bottom = NULL;
	free(move);
	return (*bottom);
}
