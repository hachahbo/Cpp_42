# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:04:56 by hachahbo          #+#    #+#              #
#    Updated: 2023/10/09 19:45:25 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC =  main.cpp Harl.cpp
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) Harl.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all