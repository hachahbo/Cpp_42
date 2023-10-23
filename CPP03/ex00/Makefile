# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:18:21 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/21 13:32:48 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ClapTrap

SRC =   main.cpp ClapTrap.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	ClapTrap.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all