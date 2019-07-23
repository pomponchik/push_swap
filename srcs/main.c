/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:10:20 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/20 22:10:22 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

void prints(int *ints, size_t size)
{
	size_t r = 0;
	ft_putstr("resize = ");
	while (r < size)
	{
		ft_putnbr(ints[r]);
		ft_putstr(", ");
		r++;
	}
	ft_putstr("\n");
}

void printsa(int *ints, size_t size)
{
	size_t r = 0;
	while (r < size)
	{
		ft_putnbr(ints[r]);
		ft_putstr(", ");
		r++;
	}
	ft_putstr("\n");
}


int main(int argc, char **argv)
{
	t_list *arguments;
	t_stacks stacks;

	if (!(arguments = ft_get_arguments_command_line(argc, argv)))
		error_input();
	if (!prove_letters(arguments))
		error_lst(arguments);
	unfolding_arguments(arguments);
	if (!prove_arguments(&arguments) || !structure_filler(arguments, &stacks))
		error_lst(arguments);
	printsa(stacks.stack_a, stacks.size_a);
	algorithm(&stacks);
	printsa(stacks.stack_a, stacks.size_a);
	out(&stacks);
	return (0);
}
