#include <head.h>

static void ints_shift_right(int *ints, size_t size)
{
	size_t index;

	index = 0;
	while (index < size - 1)
	{
		ints[index + 1] = ints[index];
		index++;
	}
}

void rra(t_stacks *stacks)
{
	int temp;

	if (stacks->size_a <= 1)
		return ;
	temp = (stacks->stack_a)[0];
	ints_shift_right(stacks->stack_a, stacks->size_a);
	(stacks->stack_a)[0] = temp;
	print_operations(stacks, "rra");
}

void rrb(t_stacks *stacks)
{
	int temp;

	if (stacks->size_b <= 1)
		return ;
	temp = (stacks->stack_b)[0];
	ints_shift_right(stacks->stack_b, stacks->size_b);
	(stacks->stack_b)[0] = temp;
	print_operations(stacks, "rrb");
}

void rrr(t_stacks *stacks)
{
	int temp;

	if (stacks->size_a > 1)
	{
		temp = (stacks->stack_a)[0];
		ints_shift_right(stacks->stack_a, stacks->size_a);
		(stacks->stack_a)[0] = temp;
	}
	if (stacks->size_b > 1)
	{
		temp = (stacks->stack_b)[0];
		ints_shift_right(stacks->stack_b, stacks->size_b);
		(stacks->stack_b)[0] = temp;
	}
	print_operations(stacks, "rrr");
}
