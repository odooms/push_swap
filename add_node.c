/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:32:10 by odooms            #+#    #+#             */
/*   Updated: 2019/09/09 16:12:50 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void  add(int data, s_list* next)
{
	s_list* new_node = (struct s_list*)malloc(sizeof(struct s_list));
	if (new_node == NULL)
	{
		return ;
	}
	new_node->data = data;
	new_node->next = next;
	//loop through the stack
	//take the next that is equals to null
	prepend(struct s_list **A,)
}
