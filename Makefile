NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -fr
LIB			= ar -rcs
LIBFT_DIR	= ./libft/
LIBFT		= $(LIBFT_DIR)libft.a
INC_DIR 	= ./includes/
INCS		= -I $(INC_DIR) -I $(LIBFT_DIR)
SRC_DIR 	= ./src/
SRC 		= $(SRC_DIR)ft_printf.c
OBJ_DIR		= ./obj/
OBJ			= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(INCS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

clean: $(OBJ)
	$(RM) $(OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re