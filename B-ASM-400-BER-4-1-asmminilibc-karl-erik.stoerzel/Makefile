##
## EPITECH PROJECT, 2021
## makefile
## File description:
## test
##

#CC = gcc
#CC += -I include/
#CC += -Wall -Wextra -Werror -g
#CC += -fPIC -nostdlib

rm = rm -f

NAME = libasm.so

SRC_FILES = 	src/strlen.asm \
		src/strchr.asm \
		src/memset.asm \
		src/memcpy.asm \
		src/strcmp.asm \
		src/memmove.asm \
		src/strncmp.asm \
		src/strcasecmp.asm \
		src/rindex.asm \
		src/strstr.asm \
		src/strpbrk.asm \
		src/strcspn.asm \
		bonus/write.asm \
		bonus/strdup.asm \
		bonus/toupper.asm \
		bonus/tolower.asm \
		bonus/tolowerchar.asm \
		bonus/toupperchar.asm

TEST_FILES = 	test/memcpy.c\
		test/memmove.c \
		test/memset.c \
		test/rindex.c \
		test/strcasecmp.c \
		test/strchr.c \
		test/strcmp.c \
		test/strcspn.c \
		test/strpbrk.c \
		test/strstr.c \
		test/change_case.c

SRC = 	$(appprefix $(SRC_DIR), $(SRC_FILES))

OBJ = 	$(SRC_FILES:.asm=.o)
OBJ_T = $(TEST_FILES:.c=.o)

%.o : %.asm
	nasm -f elf64 -o $@ $<

all: 	$(NAME)

test: $(OBJ) $(OBJ_T)
	gcc main.c $(OBJ) $(OBJ_T) -g
	./a.out

$(NAME): $(OBJ)
	$(CC) -shared -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re:	fclean all

.PHONY: all clean fclean re