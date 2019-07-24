/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:13:36 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/20 22:13:38 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

void algorithm(t_stacks *stacks, t_flaggs *flags)
{
	if (is_sorted(stacks->stack_a, stacks->size_a))
		return ;
	if (stacks->size_a <= 3)
	{
		sorting_three(stacks->stack_a, stacks->size_a, stacks, flags);
		return ;
	}
	to_b(stacks, flags);
	to_a(stacks, flags);
	final_turn(stacks, flags);
}