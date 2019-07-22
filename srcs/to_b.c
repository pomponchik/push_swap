#include <head.h>

void to_b(t_stacks *stacks)
{
	while (stacks->size_a > 3)
	{
		if ((stacks->stack_a)[stacks->size_a - 1] == stacks->max \
		|| (stacks->stack_a)[stacks->size_a - 1] == stacks->min)
			ra(stacks);
		else
			pb(stacks);
	}
	sorting_three(stacks->stack_a, stacks->size_a, stacks);
}
