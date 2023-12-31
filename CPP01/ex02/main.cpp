/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:31:25 by hamza             #+#    #+#             */
/*   Updated: 2023/10/04 10:09:04 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string &stringREF = str; 
    std::string *stringPTR; 

    stringPTR = &str;
    std::cout << "• The memory address of the string variable : " << &str <<std::endl;
    std::cout << "• The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF      : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "• The value of the string variable          : " << str << std::endl;
    std::cout << "• The value pointed to by stringPTR         : " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF         : " << stringREF << std::endl; 
}