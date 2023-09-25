/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1_.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:14:34 by hachahbo          #+#    #+#             */
/*   Updated: 2023/09/25 14:27:49 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using   namespace std;
 
class book
{
    public :
        string    name;
        string    numbers;
        string    title;
        book(string name, string number, string title)
        {
            this->name = name;
            this->numbers = number;
            this->title = title;
        }

        void info()
        {
            cout << "Title : " << title << "\n";
            cout << "name : " << name  << "\n";
            cout << "numbers : " << numbers << "\n";
        }
};
int main()
{
    book book("hamza chahboune", "120", "C++ nadi");

    book.info();
}
//https://github.com/madebypixel02/CPP-Module-00