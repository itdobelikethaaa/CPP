/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:52:24 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 17:17:35 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <locale>
#include <iomanip>
#include <sstream>

class PhoneBook
{
	private:
		Contact	contact[8];
		int		count;
	public:
		void addContact();
		void searchContact();
};

int isName(std::string str);
int allSpaces(std::string str);
int isNumber(std::string str);
#endif