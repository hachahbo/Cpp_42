# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 16:00:28 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/25 11:37:39 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Brain

SRC =   main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp Brain.cpp
CFLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = $(SRC:.cpp=.o)

all : $(NAME)
$(NAME) : $(OBJS)	Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp Brain.hpp
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp  WrongAnimal.hpp WrongCat.cpp Brain.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all


# all :
# 	c++ -std=c++98 -Wall -Wextra -Werror main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp -o Brain
# clean :
# 	rm Brain