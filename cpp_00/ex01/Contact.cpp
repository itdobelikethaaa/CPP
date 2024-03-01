/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:19:25 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 17:30:21 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const { return FirstName; }
std::string Contact::getLastName() const { return LastName; }
std::string Contact::getNickname() const { return NickName; }
std::string Contact::getPhoneNumber() const { return PhoneNumber; }
std::string Contact::getDarkestSecret() const { return DarkestSecret; }

void Contact::setFirstName(std::string const& firstName) { FirstName = firstName; }
void Contact::setLastName(std::string const& lastName) { LastName = lastName; }
void Contact::setNickname(std::string const& nickname) { NickName = nickname; }
void Contact::setPhoneNumber(std::string const& phoneNumber) { PhoneNumber = phoneNumber; }
void Contact::setDarkestSecret(std::string const& darkestSecret) { DarkestSecret = darkestSecret; }