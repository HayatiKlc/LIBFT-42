# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkilic <hkilic@student.42kocaeli.com.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 18:29:09 by hkilic            #+#    #+#              #
#    Updated: 2022/02/23 21:46:33 by hkilic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) $(OPTION) $(BONUS)
	ar rc $(NAME) *.o

clean:
	rm -f  *.o
fclean: clean
	rm -f $(NAME)

re: fclean all
