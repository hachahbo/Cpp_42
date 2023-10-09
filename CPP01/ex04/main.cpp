/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:48:28 by hamza             #+#    #+#             */
/*   Updated: 2023/10/09 12:32:34 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

int main(int ac ,char **av)
{
    std::ifstream inFile;
    std::string text;
    if(ac != 4) 
    {
        std::cout << "bad input try again !" << std::endl;
        std::cout << "enter  : ./main <filename> <to_find> <replace> " << std::endl;
        return (1);
    }
    std::string fileName = av[1];
    std::string toFind = av[2];
    std::string replace = av[3];
    inFile.open(fileName, std::ios::in);
    if(!inFile)
    {
        std::cout << "file doesn't  exist or the permissions are denided" << std::endl;
        return (1); 
    }
    std::ofstream outFile(fileName +  ".replace");
    if(inFile.is_open())
    {
        getline(inFile, text, '\0');
        size_t  pos = 0;
        while(1337)
        {
            pos = text.find(toFind, 0);
            if(pos == std::string::npos)
                break;
            text.erase(pos, replace.length());
            text.insert(pos, replace);
        }
    }
    outFile << text;
    inFile.close();
    outFile.close();
}