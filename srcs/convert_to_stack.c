#include <head.h>

void convert_arguments_to_stack(size_t channel, t_list *content)
{
	size_t size;
	t_list *temp;
	int number;

	temp = content;
	ft_lst_putstr_sep(content, ", ");
	ft_putstr("\n");
	ft_putstr("k1\n");
	while (content)
	{
		ft_putstr("j1\n");
		if (content->content)
		{
			size = ft_strlen(content->content) + 1;
			ft_putstr("j2\n");
			number = ft_atoi(content->content);
			ft_putstr("j3\n");
			ft_lst_stack_push(channel, &number, sizeof(int));
			ft_putstr("j4\n");
		}
		content = content->next;
		ft_putstr("j5\n");
	}
	ft_putstr("k2\n");
	ft_lst_stack_turn(channel);
	ft_lst_free_chain(temp);
}
