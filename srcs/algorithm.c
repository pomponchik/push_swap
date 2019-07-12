#include <head.h>

void ints(size_t stack, int *up, int *down)
{
	int *n1;
	int *n2;

	n1 = (int *)ft_lst_stack_pop(stack);
	n2 = (int *)ft_lst_stack_pop(stack);
	*down = *n2;
	*up = *n1;
	ft_lst_stack_push(stack, n2, sizeof(int));
	ft_lst_stack_push(stack, n1, sizeof(int));
	ft_free_both(up, down);
}

void move_a(size_t stack_a, size_t stack_b, t_list **commands)
{
	int up;
	int down;

	while (ft_lst_stack_size(stack_a) > 1)
	{
		ints(stack_a, &up, &down);
		if (up <= down)
			pb(stack_a, stack_b, commands);
		else
		{
			sa(stack_a, commands);
			pb(stack_a, stack_b, commands);
		}
	}
	if (!ft_lst_stack_is_empty(stack_a))
		pb(stack_a, stack_b, commands);
	if (issorted_b(stack_b))
		pa_all(stack_a, stack_b, commands);
	else
		move_b(stack_a, stack_b, commands);
}

void move_b(size_t stack_a, size_t stack_b, t_list **commands)
{
	int up;
	int down;

	while (ft_lst_stack_size(stack_b) > 1)
	{
		ints(stack_b, &up, &down);
		if (up >= down)
			pa(stack_a, stack_b, commands);
		else
		{
			sb(stack_b, commands);
			pa(stack_a, stack_b, commands);
		}
	}
	if (!ft_lst_stack_is_empty(stack_b))
		pa(stack_a, stack_b, commands);
	if (issorted_a(stack_a))
		pa_all(stack_b, stack_a, commands);
	else
		move_a(stack_a, stack_b, commands);
}

void algorithm(size_t stack_a, size_t stack_b)
{
	t_list *commands;

	commands = NULL;
	move_a(stack_a, stack_b, &commands);
	ft_lst_putstr_free_cs(commands);
}