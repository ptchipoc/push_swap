NAME = push_swap
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

CC = gcc
FLAGS = -Wextra -Wall -Werror

FT_PRINTF_DIR = ./ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C $(FT_PRINTF_DIR)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(FT_PRINTF_LIB)

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all
