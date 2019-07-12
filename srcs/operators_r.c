#include <head.h>

int ra(size_t stack_1, t_list **commands)
{
	int *num;
	int prove;

	num = (int *)ft_lst_stack_pop(stack_1);
	if (num)
	{
		prove = ft_lst_stack_push_back(stack_1, num, sizeof(int));
		if (prove)
		{
			ft_lstadd(commands, ft_lstnew_no_copy("ra\n", 3));
			return (1);
		}
	}
	return (0);
}

int rb(size_t stack_2, t_list **commands)
{
	int *num;
	int prove;

	num = (int *)ft_lst_stack_pop(stack_2);
	if (num)
	{
		prove = ft_lst_stack_push_back(stack_2, num, sizeof(int));
		if (prove)
		{
			ft_lstadd(commands, ft_lstnew_no_copy("rb\n", 3));
			return (1);
		}
	}
	return (0);
}

int rr(size_t stack_1, size_t stack_2, t_list **commands)
{
	int prove;

	prove = ra(stack_1, commands);
	prove += rb(stack_2, commands);
	if (prove)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("rr\n", 3));
		return (1);
	}
	return (0);
}
