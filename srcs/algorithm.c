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

void algorithm(size_t stack_a, size_t stack_b)
{
	t_list *commands;

	commands = NULL;
	ft_putstr("algorithm 1\n");
	move_a(stack_a, stack_b, &commands);
	ft_putstr("algorithm 2\n");
	ft_lst_putstr_free_cs(commands);
	ft_putstr("algorithm 3\n");
}
