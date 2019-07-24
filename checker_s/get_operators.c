#include "../shared_s/push_swap.h"

t_list *get_operators(void)
{
	char *str;
	t_list *result;

	str = NULL;
	result = NULL;
	while (get_next_line(0, &str) > 0)
		ft_lstadd_to_end(&result, ft_lstnew_no_copy(str, ft_strlen(str)));
	return (result);
}
