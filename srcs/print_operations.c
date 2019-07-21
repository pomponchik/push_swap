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

void print_operations(t_stacks *stacks, char *operation)
{
	if (!stacks->print)
	{
		ft_putstr(operation);
		ft_putchar('\n');
	}
}
