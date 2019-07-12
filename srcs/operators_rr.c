#include <head.h>

int rra(size_t stack_1, t_list **commands)
{
	int *num;

	if (ft_lst_stack_size(stack_1) <= 1)
		return (0);
	ft_lst_stack_turn(stack_1);
	num = (int *)ft_lst_stack_pop(stack_1);
	ft_lst_stack_turn(stack_1);
	ft_lst_stack_push(stack_1, num, sizeof(int));
	ft_lstadd(commands, ft_lstnew_no_copy("rra\n", 4));
	return (1);
}

int rrb(size_t stack_2, t_list **commands)
{
	int *num;

	if (ft_lst_stack_size(stack_2) <= 1)
		return (0);
	ft_lst_stack_turn(stack_2);
	num = (int *)ft_lst_stack_pop(stack_2);
	ft_lst_stack_turn(stack_2);
	ft_lst_stack_push(stack_2, num, sizeof(int));
	ft_lstadd(commands, ft_lstnew_no_copy("rrb\n", 4));
	return (1);
}

int rrr(size_t stack_1, size_t stack_2, t_list **commands)
{
	int prove;

	prove = rra(stack_1, commands);
	prove += rrb(stack_2, commands);
	if (prove)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("rrr\n", 4));
		return (1);
	}
	return (0);
}
