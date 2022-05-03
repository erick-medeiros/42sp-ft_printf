NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -fr
LIB			= ar -rcs
LIBFT_DIR	= ./libft/
LIBFT		= $(LIBFT_DIR)libft.a
INC_DIR 	= ./includes/
INCS		= -I $(INC_DIR)
SRC_DIR 	= ./src/
SRC 		= $(SRC_DIR)ft_printf.c
OBJ_DIR		= ./obj/
OBJ			= $(SRC:.c=.o)
COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED	= \e[91m

all: $(NAME)

%.o: %.c
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(<:.c=)"
	@$(CC) $(INCS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(NAME)"
	@$(LIB) $(NAME) $(OBJ)

$(LIBFT):
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)libft"
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)

clean: $(OBJ)
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects"
	@$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)$(NAME)"
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re