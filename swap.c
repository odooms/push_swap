/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:11:29 by odooms            #+#    #+#             */
/*   Updated: 2019/10/01 14:36:48 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a)
{
	int temp_1;
	int temp_2;

	temp_1 = remove_top(&(*a));
	temp_2 = remove_top(&(*a));
	prepend(&(*a), temp_1);
	prepend(&(*a), temp_2);
}

void	swap_b(t_list **b)
{
	int temp_1;
	int temp_2;

	temp_1 = remove_top(&(*b));
	temp_2 = remove_top(&(*b));
	prepend(&(*b), temp_1);
	prepend(&(*b), temp_2);
}

void	swap_a_b(t_list **a, t_list **b)
{
	swap_a(&(*a));
	swap_b(&(*b));
}
