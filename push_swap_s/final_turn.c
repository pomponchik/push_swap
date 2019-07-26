/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_turn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 17:18:28 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 18:12:19 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static size_t	final_turn_helper(size_t size, size_t index)
{
	if ((size - 1) - index > index)
		return (0);
	return (index);
}

void			final_turn(t_stacks *stacks, t_flaggs *flags)
{
	size_t		index;

	if (is_sorted_ps(stacks->stack_a, stacks->size_a))
		return ;
	index = 0;
	while (index < stacks->size_a)
	{
		if (index)
		{
			if ((stacks->stack_a)[index - 1] > (stacks->stack_a)[index])
			{
				index--;
				break ;
			}
		}
		index++;
	}
	index = final_turn_helper(stacks->size_a, index);
	while (!(is_sorted_ps(stacks->stack_a, stacks->size_a)))
	{
		if (index)
			ra_ps(stacks, flags);
		else
			rra_ps(stacks, flags);
	}
}
