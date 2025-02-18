# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptchipoc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/27 18:10:28 by ptchipoc          #+#    #+#              #
#    Updated: 2024/05/27 18:10:32 by ptchipoc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  ft_printf.c ft_funte.c

CC = cc

FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)	

clean :
	/bin/rm -rf $(OBJS)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
