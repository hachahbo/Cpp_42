# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 21:47:30 by hamza             #+#    #+#              #
#    Updated: 2023/10/09 14:26:10 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = main

SRC =  main.cpp
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all