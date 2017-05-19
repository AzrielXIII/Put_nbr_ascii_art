##
## Makefile for Makefile in /home/azriel/Epitech/CPE_2016_stumper5/
##
## Made by Thomas Dominé
## Login   <thomas.domine-@epitech.eu>
##
## Started on  Fri May 19 13:05:51 2017 Thomas Dominé
## Last update Fri May 19 16:31:11 2017 Azriel
##

CC	=	gcc

CFLAGS	=	-Werror -Wall -Wextra -I./include

SRC	=	src/main.c		\
		src/tools.c		\
		src/tools2.c		\
		src/create_tab.c	\
		src/handle.c		\
		src/print_nb.c		\
		src/print_nb2.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	crocus

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
