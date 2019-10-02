/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:07:04 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 10:23:46 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a)
{
	int temp;

	temp = remove_top(&(*a));
	append(&(*a), temp);
}

void	rotate_b(t_list **b)
{
	int temp;

	temp = remove_top(&(*b));
	append(&(*b), temp);
}

void	rotate_a_b(t_list **a, t_list **b)
{
	int temp_b;
	int temp_a;

	temp_a = remove_top(&(*a));
	append(&(*a), temp_a);
	temp_b = remove_top(&(*b));
	append(&(*b), temp_b);
}
