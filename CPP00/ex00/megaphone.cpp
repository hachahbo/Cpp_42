/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:21:19 by hachahbo          #+#    #+#             */
/*   Updated: 2023/08/09 11:04:17 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char *argv[])
{

	int i = 1;
	int j = 0;
	
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < argc)
	{
		j = 0;
		int length = std::strlen(argv[i]);
		while(j < length)
		{
			if(std ::isalpha(argv[i][j]))
				argv[i][j] = std::toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i];
		i++;
	}
	std::cout << "\n";
	return (0);
}