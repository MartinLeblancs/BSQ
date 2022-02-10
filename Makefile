##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	*.c

OBJ	=	*.o

NAME=	bsq

all:	build clean

build:
		gcc -c lib/my/$(SRC)
		ar rc libmy.a $(OBJ)
		gcc src/$(SRC) libmy.a -o $(NAME)


clean:
		rm $(OBJ)

re: clean build
