/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:06:02 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 10:55:41 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b)
{
	int	temp;

	temp = remove_top(&(*a));
	prepend(&(*b), temp);
}

void	push_a(t_list **a, t_list **b)
{
	int	temp;

	temp = remove_top(&(*b));
	prepend(&(*a), temp);
}
