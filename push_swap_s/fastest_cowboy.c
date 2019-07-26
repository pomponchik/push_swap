/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fastest_cowboy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:33:15 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/22 23:33:17 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static size_t how_many_steps_to_get_out_t(size_t index, size_t size)
{
	size_t up;
	size_t down;

	up = index + 1;
	down = (size - 1) - index;
	if (up < down)
		return (up);
	return (down);
}

int fastest_cowboy(t_stacks *stacks)
{
	size_t temp;
	size_t result_size;
	size_t index;
	size_t result_index;

	index = 1;
	result_size = how_many_steps_to_get_out_t(0, stacks->size_b);
	result_size += how_many_steps_to_get_out_t(is_sorted_shift_in_mind_ps(stacks->stack_a, stacks->size_a, (stacks->stack_b)[0]), stacks->size_a);
	result_index = 0;
	while (index < stacks->size_b)
	{
		//ft_putstr("STACK!\n");
		/*t_putnbr((int)result_size);
		ft_putstr("\n");
		ft_putnbr((int)how_many_steps_to_get_out_b(index, stacks->size_b));
		ft_putstr("_");
		ft_putnbr((int)how_many_steps_to_get_out_t(is_sorted_shift_in_mind_ps(stacks->stack_a, stacks->size_a, (stacks->stack_b)[index]), stacks->size_a));
		ft_putstr("\n");*/
		temp = how_many_steps_to_get_out_t(index, stacks->size_b);
		temp += how_many_steps_to_get_out_t(is_sorted_shift_in_mind_ps(stacks->stack_a, stacks->size_a, (stacks->stack_b)[index]), stacks->size_a);
		if (temp < result_size)
		{
			//ft_putstr("yes\n");
			result_size = temp;
			result_index = index;
		}
		index++;
	}
	return ((stacks->stack_b)[result_index]);
}
