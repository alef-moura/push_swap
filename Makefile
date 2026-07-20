NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = main.c 

OBJS = 

all: $(NAME)

clean:

fclean: clear
		$(RM) $(NAME)
		
re: fclean all

.PHONY: all clean fclean re