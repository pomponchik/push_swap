#include <head.h>

int sa(size_t stack_1, t_list **commands)
{
	int *up;
	int *down;

	if (ft_lst_stack_size(stack_1) > 1)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("sa\n", 3));
		up = (int *)ft_lst_stack_pop(stack_1);
		down = (int *)ft_lst_stack_pop(stack_1);
		ft_lst_stack_push(stack_1, up, sizeof(int));
		ft_lst_stack_push(stack_1, down, sizeof(int));
		return (1);
	}
	return (0);
}

int sb(size_t stack_2, t_list **commands)
{
	int *up;
	int *down;

	if (ft_lst_stack_size(stack_2) > 1)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("sb\n", 3));
		up = (int *)ft_lst_stack_pop(stack_2);
		down = (int *)ft_lst_stack_pop(stack_2);
		ft_lst_stack_push(stack_2, up, sizeof(int));
		ft_lst_stack_push(stack_2, down, sizeof(int));
		return (1);
	}
	return (0);
}

int ss(size_t stack_1, size_t stack_2, t_list **commands)
{
	int sum;

	sum = sa(stack_1, commands);
	sum += sb(stack_2, commands);
	if (sum)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("ss\n", 3));
		return (1);
	}
	return (0);
}
