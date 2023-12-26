# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 14:54:55 by hamza             #+#    #+#              #
#    Updated: 2023/12/22 02:11:34 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC =   main.cpp PmergeMe.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	PmergeMe.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp PmergeMe.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all