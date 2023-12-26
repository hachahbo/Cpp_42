/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:21:07 by hamza             #+#    #+#             */
/*   Updated: 2023/12/07 23:38:49 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// class A
// {
//     int x1;
//     int x2;
//     public:
//         A():x1(70), x2(20){}
//         void printA()
//         {
//             std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
//         }
// };
// class B
// {
//     char c;
//     public:
//     B() :c('A'){}
//     void printB(){
//         std::cout << "c = " << c << std::endl;
//     }
// };
int  main()
{
    // {
    //     int a = 70;
    //     int *p = &a;
        
    //     char *p1 = reinterpret_cast<char *>(p);
    //     std::cout << p1 <<std::endl;
    //     int *p2 = reinterpret_cast<int *>(a);
    //     std::cout << p2 <<std::endl;
    //     std::cout << sizeof(int *) << std::endl;
    //     std::cout << sizeof(int) <<std::endl;
    //     std::cout << sizeof(long) << std::endl;
    //     long e = reinterpret_cast<long>(p2);
    //     std::cout << e <<std::endl;   
    // }
    // {
    //     A a;
    //     B b;

    //     A *Ab = reinterpret_cast<A*>(&b);
    //     B *Ba = reinterpret_cast<B*>(&a);
    //     Ab->printA();
    //     Ba->printB();
    //     // std::cout << Ba << std::endl;
    // }
    {
        Data * person = new Data ;
        
        person->age = 10;
        person->Name = "hamza";
        std::cout  << "Name : "  << Serializer::serializer(person)  << std::endl;
        std::cout  << "Age : "  << Serializer::serializer(person) << std::endl;
        std::cout  << "Name : "  << Serializer::deserialize(Serializer::serializer(person))->Name  << std::endl;
        std::cout  << "Age : "  << Serializer::deserialize(Serializer::serializer(person))->age << std::endl;
        delete person;
    }
}