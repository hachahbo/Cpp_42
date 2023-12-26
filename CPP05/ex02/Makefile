# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 10:55:50 by hamza             #+#    #+#              #
#    Updated: 2023/11/21 16:30:24 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC =   main.cpp Bureaucrat.cpp AForm.cpp PresidentialPadronForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Bureaucrat.hpp AForm.hpp PresidentialPadronForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all