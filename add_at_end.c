/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:13:35 by odooms            #+#    #+#             */
/*   Updated: 2019/09/09 15:58:51 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	append(struct s_list* **A, int data)
{
	struct s_list *tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	struct s_list* new_node = add(data, NULL);
	tmp->next = new_node;
}
