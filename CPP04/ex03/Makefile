# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 15:54:26 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/25 11:37:53 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

SRC =   main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp \
		 MateriaSource.cpp 
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)


CXXXFLAGS = -std=c++98 -Wall -Wextra -Werror


$(NAME) : $(OBJS)	AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp  MateriaSource.hpp 
	c++ $(CXXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp  MateriaSource.hpp 
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all