/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 10:56:28 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 11:15:29 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(t_list *a, t_list *b)
{
	t_list	*i;
	t_list	*j;
	int		temp;

	i = a;
	while (i->next != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->data > j->data)
			{
				return (0);
			}
			j = j->next;
		}
		i = i->next;
	}
	makelist(b, a);
	return (1);
}

/*int	main(int argc, char **argv)
{
	struct s_list	*a;
	struct s_list	*b;
	int				m;
	int				i;

	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		prepend(&a, m);
		argc--;
	}
	checker(a, b);
	i = 0;
	if (strncmp(&argv[1][i], "sa", 2))
	{
		swap_A(&a);
	}
	return (0);
}*/
