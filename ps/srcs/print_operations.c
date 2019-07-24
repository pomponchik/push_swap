/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 20:44:54 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/21 20:44:56 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

static void print_stack(int *ints, size_t size)
{
	size_t index;

	index = 0;
	while (index < size)
	{
		ft_putnbr(ints[index]);
		ft_putstr(" ");
		index++;
	}
	ft_putstr("\n");
}

void print_operations(t_stacks *stacks, char *operation, t_flaggs *flags)
{
	if (!flags->print)
	{
		ft_putstr(operation);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(operation);
		ft_putchar(':');
		ft_putchar('\n');
		ft_putstr("Stack A: ");
		print_stack(stacks->stack_a, stacks->size_a);
		ft_putstr("Stack B: ");
		print_stack(stacks->stack_b, stacks->size_b);
		ft_putstr("______________________\n");
	}
}

void print_begin(t_stacks *stacks, t_flaggs *flags)
{
	if (flags->print)
	{
		ft_putstr("______________________\n");
		ft_putstr("Begin! ");
		ft_putnbr((int)stacks->size_a);
		ft_putstr(" elements.\n");
		ft_putchar('\n');
		ft_putstr("Stack A: ");
		print_stack(stacks->stack_a, stacks->size_a);
		ft_putstr("Stack B: ");
		print_stack(stacks->stack_b, stacks->size_b);
		ft_putstr("______________________\n");
	}
}
