#include <head.h>

int main(int argc, char **argv)
{
	t_list *arguments;
	size_t stack_1;
	size_t stack_2;

	ft_putstr("main 1\n");
	arguments = ft_get_arguments_command_line(argc, argv);
	ft_putstr("main 2\n");
	if (increment_numbers(&arguments) && prove_arguments(&arguments))
	{
		ft_putstr("main 3\n");
		ft_lst_putstr_sep(arguments, ", ");
		unfolding_arguments_from_strings(arguments);
		ft_putstr("main 4\n");
		stack_1 = ft_lst_stack_empty_stack_num();
		ft_putstr("main 5\n");
		stack_2 = stack_1 + 1;
		ft_putstr("main 6\n");
		convert_arguments_to_stack(stack_1, arguments);
		ft_putstr("main 7\n");
		/*if (!issorted_a(stack_1))
		{*/
			ft_putstr("main 8\n");
			algorithm(stack_1, stack_2);
			ft_putstr("main 9\n");
		//}
	}
	else
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	return (0);
}
