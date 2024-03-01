/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:34:18 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 19:53:01 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
	static int i = 0;
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

	std::cout << "[CONTACT FIELDS]" << std::endl;
	do
	{
		std::cout << "FirstName: ";
		std::getline(std::cin, FirstName);
		if(std::cin.eof())
			exit(1);
	} while (FirstName.empty() || !isName(FirstName) || allSpaces(FirstName));
	do
	{
		std::cout << "LastName: ";
		std::getline(std::cin, LastName);
		if(std::cin.eof())
			exit(1);
	} while (LastName.empty() || !isName(LastName) || allSpaces(LastName));
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, Nickname);
		if(std::cin.eof())
			exit(1);
	} while (Nickname.empty() || !isName(Nickname) || allSpaces(Nickname));
	do
	{
		std::cout << "PhoneNumber: ";
		std::getline(std::cin, PhoneNumber);
		if(std::cin.eof())
			exit(1);
	} while (PhoneNumber.empty() || !isNumber(PhoneNumber) || allSpaces(PhoneNumber));
	do
	{
		std::cout << "DarkestSecret: ";
		std::getline(std::cin, DarkestSecret);
		if(std::cin.eof())
			exit(1);
	} while (DarkestSecret.empty() || !isName(DarkestSecret) || allSpaces(DarkestSecret));
	
	contact[i].setFirstName(FirstName);
	contact[i].setLastName(LastName);
	contact[i].setNickname(Nickname);
	contact[i].setPhoneNumber(PhoneNumber);
	contact[i].setDarkestSecret(DarkestSecret);
	i++;
	count = i;
	if (i == 8)
		i = 0;
}

void PhoneBook::searchContact()
{
	std::string index;
	if (!(count > 0 && count < 9))
	{
		std::cout << "{NO CONTACTS TO SHOW}" << std::endl;
		return ;
	}
	std::cout << "     Index|First Name| Last Name|  NickName" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contact[i].getFirstName().empty() || contact[i].getLastName().empty()
            || contact[i].getNickname().empty() || contact[i].getPhoneNumber().empty()
            || contact[i].getDarkestSecret().empty())
            break;
        std::cout << std::setw(10) << i + 1 << "|";
        if (contact[i].getFirstName().length() > 10)
            std::cout << contact[i].getFirstName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contact[i].getFirstName() << "|";
        if (contact[i].getLastName().length() > 10)
            std::cout << contact[i].getLastName().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contact[i].getLastName() << "|";
        if (contact[i].getNickname().length() > 10)
            std::cout << contact[i].getNickname().substr(0, 9) << ".|" << std::endl;
        else
            std::cout << std::setw(10) << contact[i].getNickname() << "|" << std::endl;
	}
	
	std::cout << "Enter the index of the contact: ";
	std::getline(std::cin, index);
	if (std::cin.eof())
		exit(1);
	if (index.length() > 1 || !std::isdigit(index[0]))
	{
		std::cout << "{WRONG INDEX}" << std::endl;
		return;
	}
	int num;
	std::istringstream(index) >> num;
	if (num < 1 || num > count)
	{
		std::cout << "{WRONG INDEX}" << std::endl;
		return ;
	}
	
	std::cout << "First Name: " << contact[num - 1].getFirstName() << std::endl;
	std::cout << "Last Name: " << contact[num - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[num - 1].getNickname() << std::endl;
	std::cout << "Phone Number: " << contact[num - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact[num - 1].getDarkestSecret() << std::endl;
}
