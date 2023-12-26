# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 14:54:55 by hamza             #+#    #+#              #
#    Updated: 2023/12/19 16:11:08 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC =   main.cpp BitcoinExchange.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	BitcoinExchange.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all