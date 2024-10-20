# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zserobia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 11:38:29 by zserobia          #+#    #+#              #
#    Updated: 2024/05/11 11:53:13 by zserobia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SC = ft_printf.c ft_puthex.c ft_putnbar.c ft_putunsign.c ft_putstr.c \
	ft_putptr.c

SO = $(SC:.c=.o)

FLAGS = -Wall -Werror -Wextra

CC = cc

all: $(NAME)

$(NAME): $(SO)
	ar rc $(NAME) $(SO)

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(SO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
