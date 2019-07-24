/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators_rr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:32:43 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/22 21:32:46 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

static void ints_shift_left(int *ints, size_t size)
{
	size_t index;

	index = 0;
	while (index < size - 1)
	{
		ints[index] = ints[index + 1];
		index++;
	}
}

void rra(t_stacks *stacks)
{
	int temp;

	if (stacks->size_a <= 1)
		return ;
	temp = (stacks->stack_a)[0];
	ints_shift_left(stacks->stack_a, stacks->size_a);
	(stacks->stack_a)[stacks->size_a - 1] = temp;
}

void rrb(t_stacks *stacks)
{
	int temp;

	if (stacks->size_b <= 1)
		return ;
	temp = (stacks->stack_b)[0];
	ints_shift_left(stacks->stack_b, stacks->size_b);
	(stacks->stack_b)[stacks->size_b - 1] = temp;
}

void rrr(t_stacks *stacks)
{
	int temp;

	if (stacks->size_a > 1)
	{
		temp = (stacks->stack_a)[0];
		ints_shift_left(stacks->stack_a, stacks->size_a);
		(stacks->stack_a)[stacks->size_a - 1] = temp;
	}
	if (stacks->size_b > 1)
	{
		temp = (stacks->stack_b)[0];
		ints_shift_left(stacks->stack_b, stacks->size_b);
		(stacks->stack_b)[stacks->size_b - 1] = temp;
	}
}
