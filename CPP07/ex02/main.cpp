/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:48:57 by hamza             #+#    #+#             */
/*   Updated: 2023/12/11 16:58:08 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void f()
{
    system("leaks Array");
}
int main( void ) {
    atexit(f);
    try
    {
        Array<int> a(6);
        a.print();
        Array<int> b(a);
        // a = b;
        b.print();
        std::cout << b[5] << std::endl;
        // std::cout << a.size() <<std::endl;
        // std::cout << b <<std::endl;
        // a.access(8);
    }
    catch(const MyAaccessexption& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}