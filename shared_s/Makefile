# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahalmon- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/26 17:20:08 by ahalmon-          #+#    #+#              #
#    Updated: 2019/07/26 17:20:10 by ahalmon-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re silent_clean silent_fclean silent_re

NAME = slib.a
RM = /bin/rm -rfv
RMS = /bin/rm -rf
CFILES = out.c
CFILES += prove_letters.c
CFILES += proves_extra.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME):
	@echo "$(NAME) compiling... \c"
	@gcc -Wall -Wextra -Werror -c $(CFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "$(NAME) created"

clean:
	@$(RM) $(OFILES) | wc -l | tr '\n' ' ' && echo ft_*.o files deleted

fclean: clean
	@$(RM) $(NAME) | wc -l | tr '\n' ' ' && echo $(NAME) deleted

re: fclean all

silent_clean:
	@$(RMS) $(OFILES)

silent_fclean: silent_clean
	@$(RMS) $(NAME)

silent_re: silent_fclean all
