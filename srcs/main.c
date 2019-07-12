#include <head.h>

// void sorter(size_t stack_1, size_t stack_2)
// {
//
// }

// void push_swap(size_t stack_1, size_t stack_2)
// {
//
// }

int main(int argc, char **argv)
{
	t_list *arguments;
	size_t stack_1;
	size_t stack_2;
	int prove;

	arguments = ft_get_arguments_command_line(argc, argv);
	if (!(prove = prove_arguments(&arguments)))
	{
		stack_1 = ft_lst_stack_empty_stack_num();
		stack_2 = stack_1 + 1;
		ft_putstr("n-1\n");
		convert_arguments_to_stack(stack_1, arguments);
		ft_putstr("n0\n");
		if (!issorted_a(stack_1))
		{
			ft_putstr("n1\n");
			algorithm(stack_1, stack_2);
			ft_putstr("n2\n");
		}
		ft_putstr("n3\n");
	}
	else
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	return (0);
}
