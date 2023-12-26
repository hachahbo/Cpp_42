/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:57:24 by hamza             #+#    #+#             */
/*   Updated: 2023/12/14 22:36:07 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(int ac, char **av)
{
    {
        try
        {
                MutantStack<int> mstack;
                mstack.push(5);
                mstack.push(17);
                std::cout << "Top   :"  << mstack.top() << std::endl;
                mstack.pop();
                std::cout  <<"size  :" << mstack.size() << std::endl;
                mstack.push(3);
                mstack.push(5);
                mstack.push(737);
                mstack.push(0);
                MutantStack<int>::iterator it = mstack.begin();
                MutantStack<int>::iterator ite = mstack.end();
                std::cout << "stack :" << std::endl;
                while (it != ite)
                {
                    std::cout <<"- " << *it << std::endl;
                    ++it;
                }
                // std::stack<int> s(mstack);
                std::list<int> tete;
                tete.push_back(1);
                tete.push_back(1);
                tete.push_back(1);
                tete.push_back(1);
                std::list<int>::iterator  a = tete.begin();
                std::list<int>::iterator b = tete.end();
                while (a != b)
                {
                    std::cout <<"- " << *a << std::endl;
                    ++a;
                }
                return(0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}