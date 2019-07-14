#include <head.h>

static int where_is_spaces(char *str)
{
	size_t index;

	index = 0;
	while (str[index])
	{
		if (ft_isspace(str[index]))
			return (1);
		index++;
	}
	return (0);
}

static void *unfolding_arguments_from_standart_input_help(size_t *size)
{
	int		re;
	char	buf[BUFF_SIZE];
	t_list	*lst;
	void *result;

	*size = 0;
	if (BUFF_SIZE < 1 || read(0, buf, 0) < 0)
		return (NULL);
	lst = NULL;
	while ((re = read(0, buf, BUFF_SIZE)) > 0)
	{
		*size += (size_t)re;
		ft_lstadd(&lst, ft_lstnew((void *)buf, (size_t)re));
	}
	result = ft_lst_to_array_free(ft_lst_turn(lst));
	return (result);
}

void unfolding_arguments_from_strings(t_list *old)
{
	t_list *new;

	if (!old)
		return ;
	while (old)
	{
		if (where_is_spaces(old->content))
		{
			new = ft_lst_cut_numbers(old->content);
			free(old->content);
			old->content = new->content;
			if (ft_lst_chain_len(new) > 1)
			{
				(ft_lst_get_end(new))->next = old->next;
				old->next = new->next;
			}
			free(new);
		}
		old = old->next;
	}
}

t_list *unfolding_arguments_from_standart_input(size_t *error)
{
	void *mem;
	size_t size;
	t_list *result;

	*error = 0;
	mem = unfolding_arguments_from_standart_input_help(&size);
	if (!mem || !size)
		return (NULL);
	if (((char *)mem)[size - 1] != '\0')
	mem = ft_memjoin_free_1(mem, size, "\0", 1);
	if (!prove_letters((char *)mem))
	{
		*error = 1;
		return (ft_free(mem));
	}
	result = ft_lst_cut_numbers((char *)mem);
	free(mem);
	return (result);
}

int increment_numbers(t_list **lst)
{
	size_t error;
	t_list *end;
	t_list *old;
	t_list *arguments;

	arguments = *lst;
	ft_putstr("increment_numbers 1\n");
	end = unfolding_arguments_from_standart_input(&error);
	ft_putstr("increment_numbers 2\n");
	if (error)
		return (0);
	ft_putstr("increment_numbers 3\n");
	old = ft_lst_get_end(arguments);
	if (old)
		old->next = end;
	else
		*lst = end;
	ft_putstr("increment_numbers 4\n");
	return (1);
}
