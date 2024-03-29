/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prove_operators.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 17:22:54 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 17:25:49 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static int	check_operator(char *oper)
{
	if (!oper)
		return (0);
	if ((!ft_strstr(oper, "pa") || !ft_strstr(oper, "pb")) && \
	ft_strlen(oper) == 2)
		return (1);
	if ((!ft_strstr(oper, "ra") || !ft_strstr(oper, "rb") || \
	!ft_strstr(oper, "rr")) && ft_strlen(oper) == 2)
		return (1);
	if ((!ft_strstr(oper, "rra") || !ft_strstr(oper, "rrb") || \
	!ft_strstr(oper, "rrr")) && ft_strlen(oper) == 3)
		return (1);
	if ((!ft_strstr(oper, "sa") || !ft_strstr(oper, "sb") || \
	!ft_strstr(oper, "ss")) && ft_strlen(oper) == 2)
		return (1);
	return (0);
}

int			prove_operators(t_list *operators)
{
	if (!operators)
		return (1);
	while (operators)
	{
		if (!check_operator(operators->content))
			return (0);
		operators = operators->next;
	}
	return (1);
}
