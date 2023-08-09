# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 16:35:40 by hachahbo          #+#    #+#              #
#    Updated: 2023/08/09 05:04:35 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o megaphone

clean:
	@rm -rf $(OBJS)
	
fclean:
	@rm -rf $(NAME)

re : fclean all