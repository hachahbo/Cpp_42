/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:19:51 by hachahbo          #+#    #+#             */
/*   Updated: 2023/10/09 19:43:39 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void    Harl::complain(std::string level)
{
    pFnc ptr_function[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string inputs [] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    
    while(i < 4 && level.compare(inputs[i]))
        i++;
    if(i < 4)
        (this->*ptr_function[i])();
    else
        std::cout << "wrong input try again !" << std::endl;
}
