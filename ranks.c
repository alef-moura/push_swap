/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:00:45 by alesferr          #+#    #+#             */
/*   Updated: 2026/08/04 13:13:09 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_ranks(t_ps *ps)
{
	int	*r;
	int	i;
	int	j;

	r = malloc(sizeof(int) * ps->a.size);
	if (r == NULL)
		error_exit(ps);
	i = -1;
	while (++i < ps->a.size)
	{
		r[i] = 0;
		j = -1;
		while (++j < ps->a.size)
			if (ps->a.v[j] < ps->a.v[i])
				r[i]++;
	}
	i = -1;
	while (++i < ps->a.size)
		ps->a.v[i] = r[i];
	free(r);
}
