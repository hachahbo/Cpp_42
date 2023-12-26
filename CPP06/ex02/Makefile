# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 19:02:16 by hamza             #+#    #+#              #
#    Updated: 2023/12/08 22:10:17 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dynamique

SRC =   main.cpp #Serializer.cpp
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Base.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp Base.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all