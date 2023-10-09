# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 11:35:05 by hamza             #+#    #+#              #
#    Updated: 2023/10/09 19:46:44 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC =  main.cpp	HumanA.cpp Weapon.cpp HumanB.cpp
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) HumanA.hpp Weapon.hpp HumanB.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all