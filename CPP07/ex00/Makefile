# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 19:02:16 by hamza             #+#    #+#              #
#    Updated: 2023/12/09 16:41:09 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Template

SRC =   main.cpp 
		

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	whatever.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp whatever.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all