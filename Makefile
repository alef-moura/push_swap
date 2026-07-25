# Executáveis
NAME        = push_swap
BONUS_NAME  = checker

# Compilador e Flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -I.

# Fontes Comuns (utilizados tanto pelo push_swap quanto pelo checker)
COMMON_SRCS = src/stack_utils.c \
              src/parse.c \
              src/disorder.c \
              src/ranks.c \
              src/ops_swap.c \
              src/ops_push.c \
              src/ops_rotate.c \
              src/ops_rev_rotate.c

# Fontes do push_swap principal
MAIN_SRCS   = src/main.c \
              src/strategy_simple.c \
              src/strategy_medium.c \
              src/strategy_complex.c \
              src/strategy_adaptive.c \
              src/bench.c

# Fontes do bônus (checker)
BONUS_SRCS  = bonus/checker_main.c \
              bonus/checker_utils.c

# Objetos
COMMON_OBJS = $(COMMON_SRCS:.c=.o)
MAIN_OBJS   = $(MAIN_SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

# Cores para o terminal
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
RESET       = \033[0m

# Regra Principal
all: $(NAME)

$(NAME): $(COMMON_OBJS) $(MAIN_OBJS)
	@$(CC) $(CFLAGS) $(COMMON_OBJS) $(MAIN_OBJS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) compilado com sucesso!$(RESET)"

# Regra Bônus
bonus: $(BONUS_NAME)

$(BONUS_NAME): $(COMMON_OBJS) $(BONUS_OBJS)
	@$(CC) $(CFLAGS) $(COMMON_OBJS) $(BONUS_OBJS) -o $(BONUS_NAME)
	@echo "$(GREEN)✓ $(BONUS_NAME) (bônus) compilado com sucesso!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(COMMON_OBJS) $(MAIN_OBJS) $(BONUS_OBJS)
	@echo "$(YELLOW)✓ Objetos (.o) removidos.$(RESET)"

fclean: clean
	@rm -f $(NAME) $(BONUS_NAME)
	@echo "$(YELLOW)✓ Executáveis removidos.$(RESET)"

re: fclean all

.PHONY: all clean fclean re bonus