#include <head.h>

static void ints_shift_left(int *ints, size_t size)
{
	size_t index;

	index = 0;
	while (index < size - 1)
	{
		ints[index] = ints[index + 1];
		index++;
	}
}

void ra(t_stacks *stacks)
{
	int temp;

	if (stacks->size_a <= 1)
		return ;
	temp = (stacks->stack_a)[stacks->size_a - 1];
	ints_shift_left(stacks->stack_a, stacks->size_a);
	(stacks->stack_a)[stacks->size_a - 1] = temp;
	print_operations(stacks, "ra");
}

void rb(t_stacks *stacks)
{
	int temp;

	if (stacks->size_b <= 1)
		return ;
	temp = (stacks->stack_b)[stacks->size_b - 1];
	ints_shift_left(stacks->stack_b, stacks->size_b);
	(stacks->stack_b)[stacks->size_b - 1] = temp;
	print_operations(stacks, "rb");
}

void rr(t_stacks *stacks)
{
	int temp;

	if (stacks->size_b > 1)
	{
		temp = (stacks->stack_b)[stacks->size_b - 1];
		ints_shift_left(stacks->stack_b, stacks->size_b);
		(stacks->stack_b)[stacks->size_b - 1] = temp;
	}
	if (stacks->size_a > 1)
	{
		temp = (stacks->stack_a)[stacks->size_a - 1];
		ints_shift_left(stacks->stack_a, stacks->size_a);
		(stacks->stack_a)[stacks->size_a - 1] = temp;
	}
	print_operations(stacks, "rr");
}
