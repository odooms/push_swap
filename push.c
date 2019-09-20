/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:06:02 by odooms            #+#    #+#             */
/*   Updated: 2019/09/20 15:11:51 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_B(struct s_list **A, struct s_list **B)
{
	int	temp;
	temp = remove_top(&(*A));
	prepend(&(*B), temp);
}

void	push_A(struct s_list **A, struct s_list **B)
{
	int	temp;
	temp = remove_top(&(*B));
	prepend(&(*A), temp);
}
