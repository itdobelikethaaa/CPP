/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:26:35 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 19:42:08 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::string cmd;
		std::cout << "ENTER ONE COMMAND [ADD] [SEARCH] [EXIT]: " << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return 1;
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			return 0;
		else
			std::cout << "{WRONG ENTRIES}" << std::endl;
	}
	return 0;
}