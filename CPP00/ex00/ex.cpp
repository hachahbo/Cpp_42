/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:24:48 by hachahbo          #+#    #+#             */
/*   Updated: 2023/08/09 19:24:49 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <list>
using namespace std;

// class YoutubeChannel {
// public:
//     string name;
//     string ownerName;
//     int SubsribersCount;
//     list<string>PiblishedViedeoTitles;
// };

// int main()
// {
//     YoutubeChannel ytChannel1;
//     ytChannel1.name = "hamza";
//     ytChannel1.ownerName = "hamza1";
//     ytChannel1.SubsribersCount = 1222;
//     ytChannel1.PiblishedViedeoTitles = {"c++ teste", "cat cat ls | pipe"};
//     std::cout << ytChannel1.name;
//     // system("pause>0");
// }

// int main()
// {
//     int buff;

//     std::cout << "enter a value : ";
//     std::cin >> buff;
//     std::cout << "the value you entered  is " << buff << std::endl;
// }

#include <fstream>
#include <string>

int main()
{
    fstream myFile;

    // myFile.open("hamza.txt", ios::out); // write;
    // if(myFile.is_open())
    // {
    //     myFile << "Hello\n";
    //     myFile << "nikmok\n";
    //     myFile.close();
    // }
    // myFile.open("hamza.txt", ios::app); //append;
    // if(myFile.is_open())
    // {
    //     myFile << "Hello\n";
    //     myFile << "nikmok\n";
    //     myFile.close();
    // }
    myFile.open("hamza.txt", ios::in); //read;
    if(myFile.is_open())
    {
        string line; 
        while(getline(myFile, line))
        {
            std::cout << line << endl;
        }
        myFile.close();
    }
}