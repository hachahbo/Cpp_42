/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamza <hamza@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:51:13 by hamza             #+#    #+#             */
/*   Updated: 2023/12/23 13:56:51 by hamza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>

class  PmergeMe{
    
    private:
        std::vector<int> array;
        std::list<int> listArray;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe operator= (const PmergeMe &other);
        ~PmergeMe();
        
    void    ft_begin(int ac, char **av);
    int     checkIsValid(char *str);
    void    mergeSort(std::vector<int> & array);
    void    merge(std::vector<int> &array ,std::vector<int>& leftArray,std::vector<int>& rightArray);

    void mergeSortList(std::list<int>& listArray);
    void mergeList(std::list<int>& array, std::list<int>& leftArray, std::list<int>& rightArray);
};

#endif