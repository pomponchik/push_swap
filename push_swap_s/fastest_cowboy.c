/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fastest_cowboy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:33:15 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 17:59:12 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static size_t	fastest_cowboy_helper(t_stacks *stacks, size_t index)
{
	size_t		result;
	size_t		mind;

	result = how_many_steps_to_get_out_b(index, stacks->size_b);
	mind = is_sorted_shift_in_mind_ps(stacks->stack_a, stacks->size_a, \
		(stacks->stack_b)[index]);
	result += how_many_steps_to_get_out_a(mind, stacks->size_a);
	return (result);
}

int				fastest_cowboy(t_stacks *stacks)
{
	size_t		temp;
	size_t		result_size;
	size_t		index;
	size_t		result_index;

	index = 1;
	result_size = fastest_cowboy_helper(stacks, 0);
	result_index = 0;
	while (index < stacks->size_b)
	{
		temp = fastest_cowboy_helper(stacks, index);
		if (temp < result_size)
		{
			result_size = temp;
			result_index = index;
		}
		index++;
	}
	return ((stacks->stack_b)[result_index]);
}
