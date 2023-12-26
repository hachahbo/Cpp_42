# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamza <hamza@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 10:55:50 by hamza             #+#    #+#              #
#    Updated: 2023/11/23 12:47:09 by hamza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRC =   main.cpp Bureaucrat.cpp AForm.cpp PresidentialPadronForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)	Bureaucrat.hpp AForm.hpp PresidentialPadronForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	c++ -std=c++98 -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp
	c++ -std=c++98 -Werror -Wall -Werror -c $< -o $@

clean:
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -rf $(NAME)

re : fclean all