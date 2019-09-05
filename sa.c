/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:11:29 by odooms            #+#    #+#             */
/*   Updated: 2019/09/05 11:31:46 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(struct node *link_a)
{
	long int tmp;
	if (link_a->data && link_a->data->next ! = link_a->data)
	{
		tmp = link_a->data->num;
		link_a->data->num = link_a->data->next->num;
		link_a->next->num = tmp;
	}
	if(link_a->makelist)
	{
		ft_putstr("sa");
	}
}
