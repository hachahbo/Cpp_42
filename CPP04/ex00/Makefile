# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 16:00:28 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/25 11:37:34 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Polymorphism

SRC =   main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all