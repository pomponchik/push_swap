.PHONY: clean fclean re make all

FILENAMES = main.c
FILENAMES += proves_extra.c errors.c
FILENAMES += structure_filler.c operators_s.c print_operations.c
FILENAMES += unfolding_arguments.c prove_letters.c out.c
FILENAMES += operators_p.c operators_r.c operators_rr.c
FILENAMES += sorting_three.c search_max_min.c to_b.c
FILENAMES += algorithm.c
NAME = push_swap

SRCS	=$(addprefix srcs/, $(FILENAMES))
OBJS	=$(addprefix build/, $(FILENAMES:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
CFLAGS	+= -I includes/ -I libft/includes
LFLAGS	= -L ./Libft/ -lft

all: $(NAME)

$(NAME):$(OBJS) | lib
	@$(CC) $(CFLAGS) -o $(NAME) $(LFLAGS) $(OBJS)

build/%.o: srcs/%.c | build
	@$(CC) $(CFLAGS) -o $@ -c $^

re: fclean all

lib:
	@make -C ./Libft
	@make clean -C ./Libft

clean:
	@rm -rf build/

fclean: clean
	@make fclean -C ./Libft
	@rm -f $(NAME)

build:
	@mkdir build/
