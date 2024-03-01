/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:15:32 by ofarhat           #+#    #+#             */
/*   Updated: 2024/02/22 17:27:37 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (size_t j = 0; j < str.length(); j++)
				std::cout << (char) toupper(av[i][j]);
		}	
	}
	std::cout << std::endl;
	return 0;
}