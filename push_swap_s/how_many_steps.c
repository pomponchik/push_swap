/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   how_many_steps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:36:47 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 18:03:37 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

size_t		how_many_steps_to_get_out_a(size_t index, size_t size)
{
	size_t	up;
	size_t	down;

	if (index == size || !index)
	{
		up = 0;
		down = 0;
	}
	else
	{
		up = index;
		down = size - (index);
	}
	if (up < down)
		return (up);
	return (down);
}

int			do_up_a(size_t index, size_t size)
{
	size_t	up;
	size_t	down;

	if (index == size || !index)
	{
		up = 0;
		down = 0;
	}
	else
	{
		up = index;
		down = size - (index);
	}
	if (up < down)
		return (1);
	return (0);
}

size_t		how_many_steps_to_get_out_b(size_t index, size_t size)
{
	size_t	up;
	size_t	down;

	if (index == size - 1)
		up = 0;
	else
		up = index + 1;
	down = size - (index + 1);
	if (up < down)
		return (up);
	return (down);
}

int			do_up_b(size_t index, size_t size)
{
	size_t	up;
	size_t	down;

	if (index == size - 1)
		up = 0;
	else
		up = index + 1;
	down = size - (index + 1);
	if (up < down)
		return (1);
	return (0);
}
