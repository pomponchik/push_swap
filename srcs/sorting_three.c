#include <head.h>

static void sorting_three_helper(int *ints, t_stacks *stacks)
{
	if (ints[0] < ints[1] && ints[1] < ints[2])
		return ;
	else if (ints[0] < ints[1] && ints[2] < ints[0])
		ra(stacks);
	else if (ints[0] > ints[2] && ints[1] < ints[2])
		rra(stacks);
	else if (ints[0] < ints[2] && ints[2] < ints[1])
		sa(stacks);
	else if (ints[0] > ints[1] && ints[2] > ints[0])
	{
		rra(stacks);
		sa(stacks);
	}
	else
	{
		sa(stacks);
		rra(stacks);
	}
}

void sorting_three(int *ints, size_t size, t_stacks *stacks)
{
	if (size <= 1)
		return ;
	else if (size == 2)
	{
		if (ints[0] > ints[1])
		{
			sa(stacks);
			return ;
		}
	}
	sorting_three_helper(ints, stacks);
}
