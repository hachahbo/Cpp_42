# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 14:56:34 by hamza             #+#    #+#              #
#    Updated: 2023/10/01 14:58:55 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC =  main.cpp	newZombie.cpp \
	randomChump.cpp Zombie.cpp 
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all