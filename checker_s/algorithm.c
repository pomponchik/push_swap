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
	if (!ft_strstr(oper, "pa"))
		pa(stacks);
	if (!ft_strstr(oper, "pb"))
		pb(stacks);
	if (!ft_strstr(oper, "ra"))
		ra(stacks);
	if (!ft_strstr(oper, "rb"))
		rb(stacks);
	if (!ft_strstr(oper, "rr"))
		rr(stacks);
	if (!ft_strstr(oper, "rra"))
		rra(stacks);
	if (!ft_strstr(oper, "rrb"))
		rrb(stacks);
	if (!ft_strstr(oper, "rrr"))
		rrr(stacks);
	if (!ft_strstr(oper, "sa"))
		sa(stacks);
	if (!ft_strstr(oper, "sb"))
		sb(stacks);
	if (!ft_strstr(oper, "ss"))
		ss(stacks);
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

void algorithm(t_stacks *stacks, t_list *operators)
{
	operators_loop(stacks, operators);
	if (is_sorted(stacks->stack_a, stacks->size_a) && !stacks->size_b)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_lst_free_chain(operators);
}
