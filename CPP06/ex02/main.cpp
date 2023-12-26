/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:21:07 by hamza             #+#    #+#             */
/*   Updated: 2023/12/08 22:32:15 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify(Base * p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A class by pointure" << std::endl;   
    if(dynamic_cast<B*>(p))
        std::cout << "B class by pointure" << std::endl;   
    else
        std::cout << "C class by pointure" << std::endl; 
}

Base * generate()
{
    if(std::rand() % 3 == 0)
        return(new A());
    else if(std::rand() % 3 == 1)
        return(new B());
    return(new C());
}

void identify(Base & p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A class  by reference" << std::endl;
        (void)a;
    }
    catch(std::bad_cast)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B class  by reference" << std::endl;
            (void)b;
        }
        catch(std::bad_cast)
        {
            std::cout << "C class  by reference" << std::endl;
        }
    }
    
}

int main()
{
    Base *a = generate();
    Base *b = generate();

    std::cout <<" pointure a= " ;
    identify(a);
    std::cout <<" reference a = " ; identify(*a);
    std::cout <<" pointure b = " ;
    identify(b);
    std::cout <<" reference b = " ;
    identify(*b);

}
