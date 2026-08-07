/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahideo-k <ahideo-k@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:44:49 by alesferr          #+#    #+#             */
/*   Updated: 2026/08/04 13:21:08 by ahideo-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_simple(t_ps *ps)
{
	while (is_sorted(&ps->a) == 0)
	{
		rot_to_top(ps, &ps->a, min_pos(&ps->a), 0);
		do_op(ps, PB);
	}
	while (ps->b.size > 0)
		do_op(ps, PA);
}
