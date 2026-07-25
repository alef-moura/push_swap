/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:44:49 by alesferr          #+#    #+#             */
/*   Updated: 2026/07/25 18:23:37 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_ps *ps)
{
	free_ps(ps);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static int	apply_flag(t_ps *ps, const char *s)
{
	if (ft_streq(s, "--bench"))
		ps->bench = 1;
	else if (ft_streq(s, "--simple"))
		ps->strat = SIMPLE;
	else if (ft_streq(s, "--medium"))
		ps->strat = MEDIUM;
	else if (ft_streq(s, "--complex"))
		ps->strat = COMPLEX;
	else if (ft_streq(s, "--adaptive"))
		ps->strat = ADAPTIVE;
	else
		return (0);
	return (1);
}

int	parse_flags(t_ps *ps, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc && argv[i][0] == '-' && argv[i][1] == '-')
	{
		if (!apply_flag(ps, argv[i]))
			error_exit(ps);
		i++;
	}
	return (i);
}
