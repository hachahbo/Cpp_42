# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 14:31:02 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/13 14:32:20 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC =   main.cpp Fixed.cpp
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Fixed.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all