/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:32:00 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/22 21:32:02 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

static void sorting_three_helper(int *ints, t_stacks *stacks, t_flaggs *flags)
{
	if (ints[0] < ints[1] && ints[1] < ints[2])
		return ;
	else if (ints[0] < ints[1] && ints[2] < ints[0])
		ra(stacks, flags);
	else if (ints[0] > ints[2] && ints[1] < ints[2])
		rra(stacks, flags);
	else if (ints[0] < ints[2] && ints[2] < ints[1])
		sa(stacks, flags);
	else if (ints[0] > ints[1] && ints[2] > ints[0])
	{
		rra(stacks, flags);
		sa(stacks, flags);
	}
	else
	{
		sa(stacks, flags);
		rra(stacks, flags);
	}
}

void sorting_three(int *ints, size_t size, t_stacks *stacks, t_flaggs *flags)
{
	if (size <= 1)
		return ;
	else if (size == 2)
	{
		if (ints[0] > ints[1])
		{
			sa(stacks, flags);
			return ;
		}
	}
	sorting_three_helper(ints, stacks, flags);
}
