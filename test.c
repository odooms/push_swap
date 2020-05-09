/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:57:32 by odooms            #+#    #+#             */
/*   Updated: 2019/10/02 11:15:31 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	//int				l;
	int				m;
	struct s_list	*b;
	struct s_list	*a;

	while (argc - 1 >= 1)
	{
		m = ft_atoi(argv[argc - 1]);
		prepend(&a, m);
		argc--;
	}
//	Duplicates(a);
//	checker(a, b);
	// swap_a(&a);
	// remove_top(&a);
	// remove_bottom(a);
//	 push_b(&a, &b);
//	 push_b(&a, &b);
//	 push_b(&a, &b);
//	 push_b(&a, &b);
	 //push_b(&a, &b);
	// push_b(&a, &b);
	// push_b(&a, &b);
	makelist(b, a);
	return (0);
}
