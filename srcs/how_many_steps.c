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

size_t how_many_steps_to_down(t_stacks *stacks, size_t index)
{
	size_t up;
	size_t down;

	up = (stacks->size_a - 1) - index;
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
