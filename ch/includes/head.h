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
}						t_stacks;

int prove_arguments(t_list **lst);
int prove_letters(t_list *lst);
int prove_operators(t_list *operators);
void error_lst(t_list *lst);
void error_input(void);
void error_operators(t_list *lst, t_stacks *stacks);
void unfolding_arguments(t_list *lst);
int structure_filler(t_list *arguments, t_stacks *stacks);
void out(t_stacks *stacks);
void sa(t_stacks *stacks);
void sb(t_stacks *stacks);
void ss(t_stacks *stacks);
void pa(t_stacks *stacks);
void pb(t_stacks *stacks);
void ra(t_stacks *stacks);
void rb(t_stacks *stacks);
void rr(t_stacks *stacks);
void rra(t_stacks *stacks);
void rrb(t_stacks *stacks);
void rrr(t_stacks *stacks);
void algorithm(t_stacks *stacks, t_list *operators);
int is_sorted(int *ints, size_t size);
t_list *get_operators(void);

#endif
