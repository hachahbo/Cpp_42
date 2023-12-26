/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:20:09 by hamza             #+#    #+#             */
/*   Updated: 2023/12/06 15:41:07 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
 
int main(int ac, char **av)
{
    if(ac == 2)
    {
        ScalarConverter obj;
        obj.setString(av[1]);
        obj.convert();
    }
    else
       std::cout << "Error : incorrect input " << std::endl;
    return(0);
}