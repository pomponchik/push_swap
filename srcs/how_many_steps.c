/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many_steps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:36:47 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/22 21:36:49 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

size_t how_many_steps_to_get_out(t_stacks *stacks, size_t index)
{
	size_t up;
	size_t down;

	up = (stacks->size_b - 1) - index;
	down = index + 1;
	if (up < down)
		return (up);
	return (down);
}

int do_up(t_stacks *stacks, size_t index)
{
	size_t up;
	size_t down;

	up = (stacks->size_b - 1) - index;
	down = index + 1;
	if (up < down)
		return (1);
	return (0);
}

int do_down(t_stacks *stacks, size_t index)
{

}

int fastest_cowboy(t_stacks *stacks)
{
	size_t temp;
	size_t temp_2;
	size_t result;
	size_t index;

	result = 0;
	index = 1;
	temp_2 = how_many_steps_to_get_out(stacks, 0) + \
	is_sorted_shift_in_mind(stacks->stack_b, stacks->size_b, \
	(stacks->stack_a)[0]);
	while (index < size_a)
	{
		temp = how_many_steps_to_get_out(stacks, index);
		temp += is_sorted_shift_in_mind(stacks->stack_b, stacks->size_b, \
			(stacks->stack_a)[index]);
		if (temp < temp_2)
			break ;
		temp_2 = temp;
		index++;
	}
	return ((stacks->stack_a)[index])
}
