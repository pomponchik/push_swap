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

#include "../shared_s/push_swap.h"

static void do_operator(t_stacks *stacks, char *oper)
{
	if (ft_strstr(oper, "pa"))
	{
		ft_putstr("pa, ");
		pa(stacks);
	}

	else if (ft_strstr(oper, "pb"))
	{
		ft_putstr("pb, ");
		pb(stacks);
	}

	else if (ft_strstr(oper, "ra") && ft_strlen(oper) == 2)
	{
		ft_putstr("ra, ");
		ra(stacks);
	}

	else if (ft_strstr(oper, "rb") && ft_strlen(oper) == 2)
	{
		ft_putstr("rb, ");
		rb(stacks);
	}

	else if (ft_strstr(oper, "rr") && ft_strlen(oper) == 2)
	{
		ft_putstr("rr, ");
		rr(stacks);
	}

	else if (ft_strstr(oper, "rra"))
	{
		ft_putstr("rra, ");
		rra(stacks);
	}

	else if (ft_strstr(oper, "rrb"))
	{
		ft_putstr("rrb, ");
		rrb(stacks);
	}

	else if (ft_strstr(oper, "rrr"))
	{
		ft_putstr("rrr, ");
		rrr(stacks);
	}

	else if (ft_strstr(oper, "sa"))
	{
		ft_putstr("sa, ");
		sa(stacks);
	}

	else if (ft_strstr(oper, "sb"))
	{
		ft_putstr("sb, ");
		sb(stacks);
	}

	else if (ft_strstr(oper, "ss"))
	{
		ft_putstr("ss, ");
		ss(stacks);
	}

}

static void operators_loop(t_stacks *stacks, t_list *operators)
{
	if (!operators)
		return ;
	while (operators)
	{
		if (operators->content)
			do_operator(stacks, operators->content);
		operators = operators->next;
	}
}

static void printim(int *ints, size_t size)
{
	size_t index = 0;

	while (index < size)
	{
		ft_putnbr(ints[index]);
		ft_putstr(", ");
		index++;
	}
	ft_putstr("\n");
}

void algorithm(t_stacks *stacks, t_list *operators)
{
	ft_putstr("before stack = ");
	printim(stacks->stack_a, stacks->size_a);
	ft_putstr("\n");
	operators_loop(stacks, operators);
	ft_putstr("\n");
	ft_lst_putstr_sep(operators, ", ");
	ft_putstr("|\n");
	if (is_sorted(stacks->stack_a, stacks->size_a) && !stacks->size_b)
		ft_putstr("OK\n");
	else
	{
		printim(stacks->stack_a, stacks->size_a);
		printim(stacks->stack_b, stacks->size_b);
		if (!stacks->size_b)
			ft_putstr("n1\n");
		if (!is_sorted(stacks->stack_a, stacks->size_a))
			ft_putstr("n2\n");
		ft_putstr("KO\n");
	}

	ft_lst_free_chain(operators);
}
