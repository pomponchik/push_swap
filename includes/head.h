#ifndef HEAD_H
# define HEAD_H

# include "libft.h"
# include <stdio.h>

typedef struct			s_tacks
{
	int *stack_a;
	size_t size_a;
	int *stack_b;
	size_t size_b;
	size_t max;
	size_t min;

}						t_stacks;

int prove_arguments(t_list **lst);
int prove_letters(t_list *lst);
void error_lst(t_list *lst);
void error_input(void);
void unfolding_arguments(t_list *lst);
int structure_filler(t_list *arguments, t_stacks *stacks);
void out(t_stacks *stacks);

#endif
