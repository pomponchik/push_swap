/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:35:07 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/22 21:35:09 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

static void to_depth(t_stacks *stacks, int fastest)
{
	size_t mind;
	size_t steps;
	int up;

	mind = is_sorted_shift_in_mind(stacks->stack_a, stacks->size_a, fastest);
	steps = how_many_steps_to_down(stacks, mind);
	up = do_down(stacks, mind);
	while (steps)
	{
		if (up)
			rra(stacks);
		else
			ra(stacks);
		steps--;
	}
}

static void to_surface(t_stacks *stacks, int fastest)
{
	size_t index_fastest;
	int up;

	index_fastest = get_index(stacks->stack_b, stacks->size_a, fastest);
	up = do_up(stacks, index_fastest);
	/*while ((stacks->stack_b)[stacks->size_b - 1] != fastest)
	{
		if (up)
			rb(stacks);
		else
			rrb(stacks);
	}*/
}

void to_a(t_stacks *stacks)
{
	int fastest;

	while (stacks->size_b)
	{
		fastest = fastest_cowboy(stacks);
		to_surface(stacks, fastest);
		to_depth(stacks, fastest);
		pa(stacks);
	}
}
