# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cavan-vl <cavan-vl@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/18 20:42:56 by cavan-vl      #+#    #+#                  #
#    Updated: 2024/05/10 20:08:23 by cavan-vl      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CLIENT		:= client
SERVER		:= server

LIBFT			:= ./libft

CFLAGS			:= -Wall -Werror -Wextra -g -fsanitize=address
# CC				:= cc -Ofast
LIBS			:= $(LIBFT)/libft.a 
HEADER			:= -I ./inc -I $(LIBFT)/inc

SRC_FILES		:= client.c server.c utils.c
SRC_DIR			:= src
SRC				:= $(addprefix $(SRC_DIR)/, $(SRCS))

OBJ_DIR			:= obj
OBJ				:= $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

#	====	COLORS!		====	#
BLACK		:=	\033[30m
RED			:=	\033[31m
GREEN		:=	\033[32m
YELLOW		:=	\033[33m
BLUE		:=	\033[34m
MAGENTA		:=	\033[35m
CYAN		:=	\033[36m
WHITE		:=	\033[37m
RESET		:=	\033[0m

#	====	COLORS! (but the bold kind)		====	#
BLACKB		:=	\033[1;30m
REDB		:=	\033[1;31m
GREENB		:=	\033[1;32m
YELLOWB		:=	\033[1;33m
BLUEB		:=	\033[1;34m
MAGENTAB	:=	\033[1;35m
CYANB		:=	\033[1;36m
WHITEB		:=	\033[1;37m

all: libft $(CLIENT) $(SERVER)

libft:
	@ make -C $(LIBFT)

$(CLIENT): $(OBJ)
	@ $(CC) $(OBJ) $(CFLAGS) $(HEADER) $(LIBS) -o $(NAME)
	@ printf "Server is $(GREEN)ready$(RESET)!\n"

$(SERVER): $(OBJ)
	@ $(CC) $(OBJ) $(CFLAGS) $(HEADER) $(LIBS) -o $(NAME)
	@ printf "Client is $(GREEN)ready$(RESET)!\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@ mkdir -p $(OBJ_DIR)
	@ $(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
	@ rm -rf $(OBJ_DIR)
	@ rm -rf libft/$(OBJ_DIR)/
	@ echo "Object files $(REDB)deleted!$(RESET)\n"

fclean: clean
	@ rm -f $(NAME)
	@ rm -rf libft/libft.a
	@ echo "Program(s) $(REDB)deleted!\n"

re: fclean all

.PHONY: all clean fclean re libmlx