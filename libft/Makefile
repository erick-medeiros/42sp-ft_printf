NAME 			= libft.a
CFLAGS 		= -Wall -Wextra -Werror -g
CC 				= cc
LIB 			= ar -rcs
RM				= rm -fr

INC 			= ./include/libft.h
INC_FLAG	= -I ./include/

SRC_FILES	= ft_grp_is.c
SRC_FILES	+= ft_grp_to.c
SRC_FILES	+= ft_strlen.c
SRC_FILES	+= ft_memset.c
SRC_FILES	+= ft_memcpy.c
SRC_FILES	+= ft_memmove.c
SRC_FILES	+= ft_strchr.c
SRC_FILES	+= ft_strrchr.c
SRC_FILES	+= ft_strncmp.c
SRC_FILES	+= ft_memchr.c
SRC_FILES	+= ft_memcmp.c
SRC_FILES	+= ft_strnstr.c
SRC_FILES	+= ft_strdup.c
SRC_FILES	+= ft_strlcpy.c
SRC_FILES	+= ft_strlcat.c
SRC_FILES	+= ft_atoi.c
SRC_FILES	+= ft_calloc.c
SRC_FILES	+= ft_substr.c
SRC_FILES	+= ft_strjoin.c
SRC_FILES	+= ft_split.c
SRC_FILES	+= ft_itoa.c
SRC_FILES	+= ft_ulltoa_base.c
SRC_FILES	+= ft_uitoa_base.c
SRC_FILES	+= get_next_line.c
SRC_FILES	+= ft_strupd.c

SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
SRC				= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ				= $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED		= \e[91m

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

obj/%.o: src/%.c
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(<:.c=)"
	@$(CC) $(INC_FLAG) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(INC)
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(NAME:.a=)"
	@$(LIB) $(NAME) $(INC) $(OBJ)
	@echo "$(COLOR_GREEN)Compiled Successfully$(COLOR_WHITE)"

clean:
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects"
	@${RM} $(OBJ)

fclean: clean
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)$(NAME)"
	@${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re