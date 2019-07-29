/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proves_extra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:39:51 by ahalmon-          #+#    #+#             */
/*   Updated: 2019/07/26 22:11:34 by ahalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../shared_s/push_swap.h"

static t_list	*prove_duplicates(t_list *lst)
{
	t_list		*temp;
	size_t		size;

	size = ft_lst_chain_len(lst);
	temp = ft_lst_deduplication(lst);
	if (size == ft_lst_chain_len(temp))
		return (temp);
	ft_lst_free_chain(temp);
	return (NULL);
}

static int		prove_sizes(char *num)
{
	char		*temp;
	int			number;

	number = ft_atoi(num);
	temp = ft_itoa(number);
	number = ft_math_longar_str_comparison(temp, num);
	free(temp);
	if (number)
		return (0);
	return (1);
}

void			error_lst_still(t_list *lst)
{
	ft_lst_free_chain(lst);
	exit(1);
}

static void		prove_spaces(t_list *lst)
{
	t_list		*temp;
	size_t		index;
	int			indicate;

	temp = lst;
	indicate = 0;
	while (lst && !indicate)
	{
		index = 0;
		if (lst->content)
		{
			while (((char *)lst->content)[index])
			{
				if (!ft_isspace(((char *)lst->content)[index]))
				{
					indicate++;
					break ;
				}
				index++;
			}
		}
		lst = lst->next;
	}
	if (!indicate)
		error_lst_still(temp);
}

int				prove_arguments(t_list **lst_t)
{
	size_t		index;
	t_list		*temp;
	t_list		*lst;

	if (!lst_t || !*lst_t)
		exit(0);
	if (!(*lst_t = prove_duplicates(*lst_t)))
	{
		ft_lst_free_chain(*lst_t);
		return (0);
	}
	lst = *lst_t;
	prove_spaces(lst);
	index = 0;
	temp = lst;
	while (lst)
	{
		if (!prove_sizes(lst->content))
			return (0);
		lst = lst->next;
	}
	return (1);
}
