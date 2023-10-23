# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 16:00:28 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/22 19:55:25 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Polymorphism

SRC =   main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp Brain.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp Brain.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all