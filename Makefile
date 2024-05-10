# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cavan-vl <cavan-vl@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/18 20:42:56 by cavan-vl      #+#    #+#                  #
#    Updated: 2024/05/10 21:33:15 by cavan-vl      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJ		= $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
# CFLAGS += -fsanitize=address -g

all: libft server client

server: server.o
		@ $(CC) $(CFLAGS) -o $@ $< libft/libft.a

client: client.o
		@ $(CC) $(CFLAGS) -o $@ $< libft/libft.a 

%.o: %.c 
	$(CC) -c $(CFLAGS) -o $@ $<

libft:
		@ make -C libft

clean:
		@ rm -f $(OBJ)
		@ make -C libft clean

fclean: clean
		@ rm -f server client libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re