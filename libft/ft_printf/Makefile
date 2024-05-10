# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cavan-vl <cavan-vl@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/21 10:13:44 by cavan-vl      #+#    #+#                  #
#    Updated: 2024/01/23 11:52:10 by cavan-vl      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCL		= ft_printf.h

SRC			=	ft_printf.c \
				ft_printf_utils.c \

OFILES		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(HEADER)
	@ar rcs $(NAME) $?

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean make fclean re