# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 19:12:23 by yessemna          #+#    #+#              #
#    Updated: 2023/11/24 19:12:25 by yessemna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wextra -Werror -Wall
RM = rm -f


SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_put_adrs.c ft_put_hex.c

OBJ = $(SRC:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -I. -o $@ -c $<

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re