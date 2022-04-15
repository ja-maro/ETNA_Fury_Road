CC		=	gcc

RM		=	rm -f

CFLAGS	=	-W -Wall -Werror -Wextra -Wimplicit -I ./include -ansi -pedantic

NAME	=	RPG

SRC		=	main.c \
			functions/my_putchar.c \
			functions/my_putstr.c \
			functions/my_putnbr.c \
			functions/my_readline.c \
			functions/rpg_intro.c \
			functions/start_messages.c \
			functions/end_messages.c \
			functions/create_monster.c \
			functions/init_enemy.c  \
			functions/init_player.c \
			functions/init_boss.c \
			functions/my_strcmp.c \
			functions/my_strlen.c

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
