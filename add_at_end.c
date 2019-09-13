/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:13:35 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 11:22:23 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append(struct s_list** end, int num)
{
	struct s_list* tmp = (struct s_list*)malloc(sizeof(struct s_list));
	struct s_list *last = *end;
	tmp->data = num;
	tmp->next = NULL;
	if (*end == NULL)
	{
		end = &tmp;
		return ;
	}
	while (last->next != NULL)
	last = last->next;
	last->next = tmp;
	return ;
}
