NAME			= run_test
INC_DIR		= ../include/
INC_SRC		= ../src/

PATH_LIB	= ../
PATH_EXT	= ./extracted/
PATH_INC	= ./include/
PATH_SRC	= ./src/
PATH_OBJ	= ./obj/
PATH_LOG	= ./log/

LIB				= $(PATH_LIB)libftprintf.a

CC				= cc
INC_FLAG	= -I $(PATH_INC) -I $(PATH_EXT) -g
CFLAGS		= -no-pie -g
BON_FLAGS	= -D RUN_BONUS=1

SRC_FILES	= utils.c
SRC_FILES	+= pure_test.c
SRC_FILES	+= c_test.c
SRC_FILES	+= s_test.c
SRC_FILES	+= p_test.c
SRC_FILES	+= i_test.c
SRC_FILES	+= d_test.c
SRC_FILES	+= u_test.c
SRC_FILES	+= upperx_test.c
SRC_FILES	+= x_test.c
SRC_FILES	+= pct_test.c
SRC_FILES	+= mix_test.c

#bonus
SRC_FILES	+= nbr_test.c
SRC_FILES += minus_test.c
SRC_FILES += 0_test.c
SRC_FILES += dot_test.c
SRC_FILES	+= sharp_test.c
SRC_FILES	+= space_test.c
SRC_FILES	+= plus_test.c

SRC 				= $(foreach i, $(SRC_FILES), $(PATH_SRC)$(i))
OBJ					= $(foreach i, $(SRC_FILES), $(PATH_OBJ)$(i:.c=.o))

FILE_PROG		= main

CREATE_DIR	= mkdir -p
RM					= rm -fr

COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED		= \e[91m
COLOR_BLUE	= \e[34m

all: create_dir compile_lib compile_prog

bonus: create_dir compile_lib compile_prog_bonus

norm:
	@norminette $(INC_DIR)*.h $(INC_SRC)*.c

valg:
	@valgrind --leak-check=full --show-leak-kinds=all -s ./run_test

obj/%.o: src/%.c
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)$(<:.c=)"
	@$(CC) $(INC_FLAG) -c $< -o $@

create_dir:
	@$(CREATE_DIR) $(PATH_EXT) $(PATH_OBJ) $(PATH_LOG)

compile_lib:
	@echo -n "$(COLOR_BLUE)"
	@make -C $(PATH_LIB)
	@echo "$(COLOR_GREEN)Extracting $(COLOR_WHITE)$(LIB)"
	@ar -x $(LIB) --output $(PATH_EXT)
	@echo -n "$(COLOR_WHITE)"

compile_prog: $(OBJ)
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)run_test"
	@$(CC) $(INC_FLAG) -c $(FILE_PROG).c -o ./obj/$(FILE_PROG).o
	@$(CC) $(CFLAGS) $(PATH_EXT)*.o $(PATH_OBJ)*.o -o $(NAME)

compile_prog_bonus: $(OBJ)
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)run_test"
	@$(CC) $(INC_FLAG) $(BON_FLAGS) -c $(FILE_PROG).c -o ./obj/$(FILE_PROG).o
	@$(CC) $(CFLAGS) $(BON_FLAGS) $(PATH_EXT)*.o $(PATH_OBJ)*.o -o $(NAME)

clean:
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects"
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)files extracted"
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)logs"
	@$(RM) $(PATH_OBJ)* $(PATH_EXT)*
	@$(RM) $(PATH_LOG)*

fclean: clean
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)$(NAME)"
	@$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus