/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:41:53 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/29 16:29:40 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    phonebook Pbook;
    std::string input;

    Pbook.setIndex(); 
    while(7)
    {
        std::cout << "enter a command : ";
        if(!getline(std::cin, input))
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
        
        if(input == "ADD")
        {   
            Pbook.addContact();
        }
        else if(input == "SEARCH")
            Pbook.displayContacts(Pbook);
        else if(input == "EXIT")
            exit(0);
        else
            std::cout << "command not found try again !" << std::endl; 
    }
}