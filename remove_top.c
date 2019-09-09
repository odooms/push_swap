/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:59:33 by odooms            #+#    #+#             */
/*   Updated: 2019/09/09 16:15:06 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct s_list remove_top(struct s_list *top)
{
	if (top == NULL)
		return NULL;
	struct *move = top;
	top = top->next;
	move->next = NULL;
	if(move == top)
		top = NULL;
	free(move);
	return(top);
}
