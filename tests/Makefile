INC_DIR		= ../include/
INC_SRC		= ../src/
NORM		= norminette $(INC_DIR)*.h $(INC_SRC)*.c

PATH_LIB	= ../
PATH_EXT	= ./extracted/
PATH_INC	= ./include/
PATH_SRC	= ./src/
PATH_OBJ	= ./obj/

LIB			= $(PATH_LIB)libftprintf.a

CREATE_DIR	= mkdir -p
RM			= rm -fr

COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED	= \e[91m
COLOR_BLUE	= \e[34m

all: create_dir compile_lib compile_prog

clean:
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects and files extracted"
	@$(RM) $(PATH_OBJ)* $(PATH_EXT)*

create_dir:
	@$(CREATE_DIR) $(PATH_EXT) $(PATH_OBJ)

compile_lib:
	@echo -n "$(COLOR_BLUE)"
	@make -C $(PATH_LIB)
	@echo "$(COLOR_GREEN)Extracting $(COLOR_WHITE)$(LIB)"
	@ar -x $(LIB) --output $(PATH_EXT)
	@echo -n "$(COLOR_WHITE)"

compile_prog:
	@echo "$(COLOR_GREEN)Compiling $(COLOR_WHITE)run_test"
	@gcc -I $(PATH_INC) -I $(PATH_EXT) -c main.c -o ./obj/main.o
	@gcc -no-pie $(PATH_EXT)*.o $(PATH_OBJ)*.o -o ./run_test

norm:
	@$(NORM)