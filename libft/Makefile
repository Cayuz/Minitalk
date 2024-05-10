NAME		:= libft.a

INCLUDE		:=	inc/libft.h \
				inc/ft_printf.h \
				inc/get_next_line.h \

CC			:= cc
CFLAGS		:= -Wall -Werror -Wextra -g

SRC_CLASS	:= libft/class_fts/
SRC_STRING	:= libft/string_fts/
SRC_MEMORY	:= libft/mem_fts/
SRC_OUTPUT	:= libft/put_fts/
SRC_LIST	:= libft/list_fts/

SRC_PRINTF	:= ft_printf/
SRC_GNL		:= get_next_line/

SRC_FILES	:=	$(addprefix $(SRC_CLASS), \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_toupper.c \
				ft_tolower.c \
				) \
				$(addprefix $(SRC_STRING), \
				ft_strlen.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_bzero.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strmapi.c \
				ft_atoi.c \
				ft_atol.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_striteri.c \
				ft_split.c \
				ft_itoa.c \
				free_array.c \
				copy_array.c \
				) \
				$(addprefix $(SRC_MEMORY), \
				ft_memset.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memcmp.c \
				ft_memchr.c \
				ft_malloc.c \
				) \
				$(addprefix $(SRC_OUTPUT), \
				ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_putstr_fd.c \
				error_msg.c \
				error_exit.c \
				put_array.c \
				) \
				$(addprefix $(SRC_LIST), \
				ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				free_list.c \
				node_count.c \
				print_list.c \
				) \
				$(addprefix $(SRC_PRINTF), \
				ft_printf.c \
				ft_printf_utils.c \
				) \
				$(addprefix $(SRC_GNL), \
				get_next_line.c \
				get_next_line_utils.c \
				) \

OBJ_DIR		:= obj/
OBJS		:= $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

DIRS		:= $(SRC_CLASS) $(SRC_MEMORY) $(SRC_STRING) $(SRC_LIST) $(SRC_OUTPUT) $(SRC_PRINTF) $(SRC_GNL)

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	@ echo "Libft is ready!"
	@ ar rcs $(NAME) $?

$(OBJ_DIR)%.o: %.c
	@ mkdir -p $(addprefix $(OBJ_DIR), $(DIRS))
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	echo "Bye Bye object files!"
	@ rm -rf $(OBJ_DIR)
	@ rm -rf $(OBJS_BONUS)

fclean: clean
	echo "Bye Bye Libft!"
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
