/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:54:06 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 17:29:22 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

		void setFirstName(const std::string& firstName);
        void setLastName(const std::string& lastName);
        void setNickname(const std::string& nickname);
        void setPhoneNumber(const std::string& phoneNumber);
        void setDarkestSecret(const std::string& darkestSecret);
};

#endif