/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:41:53 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 14:04:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    phonebook Pbook;
    std::string input;

    while(input != "EXIT")
    {
        std::cout << "enter a command : ";
        getline(std::cin, input);
        
        if(input == "ADD")
        {   
            Pbook.add_contact();
        } 
    }
}