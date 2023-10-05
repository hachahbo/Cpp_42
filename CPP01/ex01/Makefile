# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 15:29:08 by hamza             #+#    #+#              #
#    Updated: 2023/10/03 15:29:52 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRC =  main.cpp	Zombie.cpp \
	Zombiehorde.cpp 
		

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) 
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all