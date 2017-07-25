CC = gcc

CFLAGS = -Wextra -Wall -Werror

RM = rm -f

NAME = bsq

SRCS = main.c			\
	   check_errors.c	\
	   tools.c			\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all
