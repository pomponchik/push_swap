/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:13:36 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 17:31:43 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static void	do_operator(t_stacks *stacks, char *oper)
{
	if (ft_strstr(oper, "pa") && ft_strlen(oper) == 2)
		pa(stacks);
	else if (ft_strstr(oper, "pb") && ft_strlen(oper) == 2)
		pb(stacks);
	else if (ft_strstr(oper, "ra") && ft_strlen(oper) == 2)
		ra(stacks);
	else if (ft_strstr(oper, "rb") && ft_strlen(oper) == 2)
		rb(stacks);
	else if (ft_strstr(oper, "rr") && ft_strlen(oper) == 2)
		rr(stacks);
	else if (ft_strstr(oper, "rra") && ft_strlen(oper) == 3)
		rra(stacks);
	else if (ft_strstr(oper, "rrb") && ft_strlen(oper) == 3)
		rrb(stacks);
	else if (ft_strstr(oper, "rrr") && ft_strlen(oper) == 3)
		rrr(stacks);
	else if (ft_strstr(oper, "sa") && ft_strlen(oper) == 2)
		sa(stacks);
	else if (ft_strstr(oper, "sb") && ft_strlen(oper) == 2)
		sb(stacks);
	else if (ft_strstr(oper, "ss") && ft_strlen(oper) == 2)
		ss(stacks);
}

static void	operators_loop(t_stacks *stacks, t_list *operators)
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

void		algorithm(t_stacks *stacks, t_list *operators)
{
	operators_loop(stacks, operators);
	if (is_sorted(stacks->stack_a, stacks->size_a) && !stacks->size_b)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_lst_free_chain(operators);
}
