CC		=	gcc

RM		=	rm -f

CFLAGS	=	-W -Wall -Werror -Wextra -Wimplicit -I ./include -ansi -pedantic

NAME	=	RPG

SRC		=	main.c \
			functions/my_putchar.c \
			functions/my_putstr.c \
			functions/my_readline.c \
			function/my_strcmp.c

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
