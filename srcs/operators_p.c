#include <head.h>

int pa(size_t stack_1, size_t stack_2, t_list **commands)
{
	int *num;

	num = (int *)ft_lst_stack_pop(stack_2);
	if (num)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("pa\n", 3));
		ft_lst_stack_push(stack_1, num, sizeof(int));
		return (1);
	}
	return (0);
}

int pb(size_t stack_1, size_t stack_2, t_list **commands)
{
	int *num;

	num = (int *)ft_lst_stack_pop(stack_1);
	if (num)
	{
		ft_lstadd(commands, ft_lstnew_no_copy("pb\n", 3));
		ft_lst_stack_push(stack_2, num, sizeof(int));
		return (1);
	}
	return (0);
}

void pa_all(size_t stack_1, size_t stack_2, t_list **commands)
{
	while (!ft_lst_stack_is_empty(stack_2))
		pa(stack_1, stack_2, commands);
}
