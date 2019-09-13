/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:32:10 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 09:41:13 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepend(struct s_list **A, int data)
{
	struct s_list *link_a = (struct s_list*)malloc(sizeof(struct s_list));
	link_a->data = data;
	link_a->next = *A;
	*A = link_a;
}
