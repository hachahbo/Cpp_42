/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:57:24 by hamza             #+#    #+#             */
/*   Updated: 2023/12/12 22:20:43 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<iostream>
#include<array>
#include <vector>
#include<tuple>

int main(int ac, char **av)
{
    // {
    //     //->>>>>>>>>array ->> you can know the size of the array
    //     try
    //     {
    //         std::array<int,6> arr = {1, 2, 3, 4, 5, 6};
    //         std::cout << arr.at(5)  << std::endl;
    //         std::cout << std::get<5>(arr) << std::endl;
    //         std::cout << arr[5] <<std::endl;

    //         int &a = arr.front();
    //         int &b = arr.back();

    //         a = 10;
    //         b = 20;
    //         std::cout << "the array after " << std::endl;
    //         for (int x = 0; x < arr.size(); x++)
    //             std::cout << arr.at(x) << " ";
    //         std::cout <<std::endl;
            
    //         std::array<int,6> arrb = {110, 22, 33, 43, 53, 6};
    //         std::cout << arr.size() << arr.max_size() << std::endl;
    //         arr.swap(arrb);
    //         std::cout << "the first array efter swaping " << std::endl;
    //         for (int x = 0; x < arr.size(); x++)
    //             std::cout << arr.at(x) << " ";
    //     }
    //     catch(const std::exception& e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
    // }
    // {
    //     //->>>>>>>>vector  ->> resizing the the array when you insert or delete an element
    //     std::vector<int> arr;
        
    //     for(int i = 1; i <= 6; i++)
    //         arr.push_back(i);
         
    //     for(int i = 0; i < arr.size(); i++)
    //         std::cout << arr.at(i) << " ";
    //     std::cout << std::endl;
    //     for(auto i = arr.begin(); i != arr.end(); ++i)
    //         std::cout << *i << " ";
    //     std::cout << std::endl;
    //     for(auto i = arr.rbegin(); i != arr.rend(); ++i)
    //         std::cout << *i << " ";
    //     std::cout << std::endl;
    //     std::cout << arr.max_size() << std::endl;
    //     // arr.resize(20);
    //     // std::cout << arr.capacity() <<std::endl;
    //     // arr.shrink_to_fit();
    //     std::cout << arr.capacity();
    // }           
            
    {
        try
        {
            if(ac != 2)
                return (0);
            std::vector<int> vect;

            for(int i = 0; i < 6; i++)
                vect.push_back(i + 1);
            easyFind(vect, std::atoi(av[1]));
        }
        catch(const MyAaccessexption& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}