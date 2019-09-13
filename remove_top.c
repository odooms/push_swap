/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:59:33 by odooms            #+#    #+#             */
/*   Updated: 2019/09/13 09:38:16 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	remove_top(struct s_list** head)
{
	struct s_list* tmp = *head;
	int result = tmp->data;
	(*head) = (*head)->next;
	free(tmp);
	return (result);
}
