#include <head.h>

static void movement(size_t stack_1, size_t stack_2)
{
	int *temp;

	temp = ft_lst_stack_pop(stack_1);
	ft_lst_stack_push(stack_2, temp, sizeof(int));
	free(temp);
}

static void movement_all(size_t stack_1, size_t stack_2)
{
	while (!ft_lst_stack_is_empty(stack_1))
		movement(stack_1, stack_2);
}

int issorted_a(size_t stack)
{
	int up;
	int down;
	size_t empty;
	int result;

	result = 1;
	ft_putstr("f0\n");
	empty = ft_lst_stack_empty_stack_num();
	ft_putstr("f1\n");
	while (ft_lst_stack_size(stack) > 1)
	{
		ft_putstr("f2\n");
		ints(stack, &up, &down);
		ft_putstr("f3\n");
		if (up > down)
			result = 0;
		ft_putstr("f4\n");
		movement(stack, empty);
		ft_putstr("f5\n");
	}
	ft_putstr("f6\n");
	movement_all(empty, stack);
	ft_putstr("f7\n");
	return (result);
}

int issorted_b(size_t stack)
{
	int up;
	int down;
	size_t empty;
	int result;

	result = 1;
	empty = ft_lst_stack_empty_stack_num();
	while (ft_lst_stack_size(stack) > 1)
	{
		ints(stack, &up, &down);
		if (up < down)
			result = 0;
		movement(stack, empty);
	}
	movement_all(empty, stack);
	return (result);
}
