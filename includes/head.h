#ifndef HEAD_H
# define HEAD_H

# include "libft.h"
# include <stdio.h>

typedef struct			s_tacks
{
	int print;
	int *stack_a;
	size_t size_a;
	int *stack_b;
	size_t size_b;
	int max;
	int min;

}						t_stacks;

int prove_arguments(t_list **lst);
int prove_letters(t_list *lst);
void error_lst(t_list *lst);
void error_input(void);
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

void sorting_three(int *ints, size_t size, t_stacks *stacks);
void search_max_min(t_stacks *stacks);
void algorithm(t_stacks *stacks);
void to_a(t_stacks *stacks);
void to_b(t_stacks *stacks);
int is_sorted(int *ints, size_t size);
int is_sorted_shift(int *ints, size_t size);
size_t is_sorted_shift_in_mind(int *ints, size_t size, int new);
size_t get_index(int *ints, size_t size, int num);
void final_turn(t_stacks *stacks);
int do_down(t_stacks *stacks, size_t index);
int do_up(t_stacks *stacks, size_t index);
int fastest_cowboy(t_stacks *stacks);
size_t how_many_steps_to_get_out(t_stacks *stacks, size_t index);
size_t how_many_steps_to_down(t_stacks *stacks, size_t index);

void print_operations(t_stacks *stacks, char *operation);



void prints(int *ints, size_t size);

#endif
