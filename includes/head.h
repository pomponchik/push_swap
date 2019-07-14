#ifndef HEAD_H
# define HEAD_H

# include "libft.h"
# include <stdio.h>

int prove_arguments(t_list **lst);
int prove_letters(char *num);
int increment_numbers(t_list **arguments);
void convert_arguments_to_stack(size_t channel, t_list *content);
void unfolding_arguments_from_strings(t_list *old);
t_list *unfolding_arguments_from_standart_input(size_t *error);

int sa(size_t stack_1, t_list **commands);
int sb(size_t stack_2, t_list **commands);
int ss(size_t stack_1, size_t stack_2, t_list **commands);

int pa(size_t stack_1, size_t stack_2, t_list **commands);
int pb(size_t stack_1, size_t stack_2, t_list **commands);
void pa_all(size_t stack_1, size_t stack_2, t_list **commands);

int ra(size_t stack_1, t_list **commands);
int rb(size_t stack_2, t_list **commands);
int rr(size_t stack_1, size_t stack_2, t_list **commands);

int rra(size_t stack_1, t_list **commands);
int rrb(size_t stack_2, t_list **commands);
int rrr(size_t stack_1, size_t stack_2, t_list **commands);

int issorted_a(size_t stack);
int issorted_b(size_t stack);

void ints(size_t stack, int *up, int *down);
void move_a(size_t stack_a, size_t stack_b, t_list **commands);
void move_b(size_t stack_a, size_t stack_b, t_list **commands);
void algorithm(size_t stack_a, size_t stack_b);

#endif
