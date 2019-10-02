/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:38:51 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 10:18:15 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_a(t_list **a)
{
	int temp;

	temp = remove_bottom((*a));
	prepend(&(*a), temp);
}

void	reverse_b(t_list **b)
{
	int temp;

	temp = remove_bottom((*b));
	prepend(&(*b), temp);
}

void	reverse_a_b(t_list **a, t_list **b)
{
	reverse_a(&(*a));
	reverse_b(&(*b));
}
