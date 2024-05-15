# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cavan-vl <cavan-vl@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/18 20:42:56 by cavan-vl      #+#    #+#                  #
#    Updated: 2024/05/15 16:11:24 by cavan-vl      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJ		= $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra -no-pie -g
# CFLAGS += -fsanitize=address -g

OBJ_DIR		:= obj/
OBJS		:= $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

all: libft server client 

all:
	@make -s --no-print-directory -C libft >/dev/null
	@make server client >/dev/null

server: server.o
	@ echo "Server is ready!"
	@ $(CC) $(CFLAGS) -o $@ $< libft/libft.a

client: client.o
	@ echo "Client is ready!"
	@ $(CC) $(CFLAGS) -o $@ $< libft/libft.a 

%.o: %.c 
	@	$(CC) -c $(CFLAGS) -o $@ $<

libft:
	@ make -C libft

clean:
	@ rm -f $(OBJ)
	@ make -C libft clean

fclean: clean
	@ rm -f server client libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re