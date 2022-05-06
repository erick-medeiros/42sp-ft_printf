INC_DIR		= ../include/
INC_SRC		= ../src/
NORM		= norminette $(INC_DIR)*.h $(INC_SRC)*.c

PATH_LIB	= ../
PATH_EXT	= ./extracted/
PATH_INC	= ./include/
PATH_SRC	= ./src/
PATH_OBJ	= ./obj/
PATH_LOG	= ./log/

LIB			= $(PATH_LIB)libftprintf.a

CC			= cc
INC_FLAG	= -I $(PATH_INC) -I $(PATH_EXT)
CFLAGS		= -no-pie

SRC			= $(PATH_SRC)c_test.c
SRC			+= $(PATH_SRC)utils.c

OBJ			= $(PATH_OBJ)c_test.o
OBJ			+= $(PATH_OBJ)utils.o

FILE_PROG	= main

CREATE_DIR	= mkdir -p
RM			= rm -fr

COLOR_WHITE	= \e[00m
COLOR_GREEN	= \e[32m
COLOR_RED	= \e[91m
COLOR_BLUE	= \e[34m

all: create_dir compile_lib compile_prog

norm:
	@$(NORM)

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
	@$(CC) $(CFLAGS) $(PATH_EXT)*.o $(PATH_OBJ)*.o -o ./run_test

clean:
	@echo "$(COLOR_RED)Removing $(COLOR_WHITE)all objects and files extracted"
	@$(RM) $(PATH_OBJ)* $(PATH_EXT)*

re: clean all