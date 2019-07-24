/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:08:40 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/20 22:08:43 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <head.h>

void error_lst(t_list *lst)
{
	ft_lst_free_chain(lst);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void error_input(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}