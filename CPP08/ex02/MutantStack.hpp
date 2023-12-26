/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:49:01 by hamza             #+#    #+#             */
/*   Updated: 2023/12/21 22:20:31 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSTANTSTACK_HPP
#define MUSTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque <T> > 
class MutantStack : public std::stack<T>
{
    private:

    public:
        MutantStack(void){}
        MutantStack(const MutantStack &other)
        {*this = other;}
        MutantStack & operator=(const MutantStack &other)
        {
            if(this != &other)
                *this = other;
            return *this;
        }
        ~MutantStack(void){}

        typedef typename Container::iterator iterator;
                // typedef typename MutantStack::container_type::iterator iterator;
        iterator begin(){return(this->c.begin());}
        iterator end(){return(this->c.end());}
        
};
#endif