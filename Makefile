# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 13:02:00 by alesferr          #+#    #+#              #
#    Updated: 2026/08/04 16:57:50 by alesferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS_NAME	= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS    = -I.

SRCS		= push_swap.c stack.c ops.c ranks.c \
				Arquivos_Algoritmos/sort_complex.c \
				Arquivos_Algoritmos/sort_medium.c \
				Arquivos_Algoritmos/sort_simple.c \
				Arquivos_Algoritmos/sort_small.c \
				Arquivos_Entrada_e_Processamento/parse.c \
				Arquivos_Entrada_e_Processamento/parse_nums.c \
				Arquivos_Entrada_e_Processamento/disorder.c \
				Arquivos_Utilidades_e_Testes/utils.c \
				Arquivos_Utilidades_e_Testes/utils2.c \
				Arquivos_Utilidades_e_Testes/bench.c \


OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re