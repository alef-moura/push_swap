/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:44:49 by alesferr          #+#    #+#             */
/*   Updated: 2026/07/25 18:24:20 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	min_pos(t_stack *a)
{
	int	i;
	int	pos;

	pos = 0;
	i = 1;
	while (i < a->size)
	{
		if (st_get(a, i) < st_get(a, pos))
			pos = i;
		i++;
	}
	return (pos);
}

void	sort_simple(t_ps *ps)
{
	while (!is_sorted(&ps->a))
	{
		rot_to_top(ps, &ps->a, min_pos(&ps->a), 0);
		do_op(ps, PB);
	}
	while (ps->b.size > 0)
		do_op(ps, PA);
}
