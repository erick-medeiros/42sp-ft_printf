NAME				= libftprintf.a
CC					= cc
CFLAGS			= -Wall -Wextra -Werror -g
RM					= rm -fr
LIB					= ar -rcs
LIBFT_DIR		= ./libft/
LIBFT				= $(LIBFT_DIR)libft.a
INC_DIR 		= ./include/
INC_FLAG		= -I $(INC_DIR) -I $(LIBFT_DIR)include/ -g
INC					= $(INC_DIR)libftprintf.h
SRC_DIR 		= ./src/
OBJ_DIR			= ./obj/

SRC_FILES		= ft_printf.c
SRC_FILES		+= ft_initialize.c
SRC_FILES		+= ft_placeholder.c
SRC_FILES		+= ft_specifier_c.c
SRC_FILES		+= ft_specifier_s.c
SRC_FILES		+= ft_specifier_p.c
SRC_FILES		+= ft_specifier_d_i.c
SRC_FILES		+= ft_specifier_u.c
SRC_FILES		+= ft_specifier_x.c
SRC_FILES		+= ft_specifier_pct.c
SRC_FILES		+= ft_subspecs.c

SRC 				= $(foreach i, $(SRC_FILES), $(SRC_DIR)$(i))
OBJ					= $(foreach i, $(SRC_FILES), $(OBJ_DIR)$(i:.c=.o))

COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED		= \e[91m
COLOR_BLUE	= \e[34m

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

obj/%.o: src/%.c
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(<:.c=)"
	@$(CC) $(INC_FLAG) -c $< -o $@

$(NAME): $(OBJ) $(INC) $(LIBFT)
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(NAME)"
	@$(LIB) $(NAME) $(INC) $(OBJ)

$(LIBFT):
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)libft"
	@echo -n "$(COLOR_BLUE)"
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) $(NAME)

clean:
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects"
	@$(RM) $(OBJ)
	@echo -n "$(COLOR_BLUE)"
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)$(NAME)"
	@$(RM) $(NAME)
	@echo -n "$(COLOR_BLUE)"
	@make fclean -C $(LIBFT_DIR)

re: fclean all

bonus: all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus