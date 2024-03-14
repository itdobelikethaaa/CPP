/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:57:21 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:57:22 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Cat";
    std::cout << "Default Constructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& WrongCat) : WrongAnimal(WrongCat)
{
    std::cout << "Copy Constructor called (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& WrongCat)
{
    if (this != &WrongCat)
        this->type = WrongCat.type;
    return (*this);
}

WrongCat::~WrongCat() { std::cout << "Destructor called (WrongCat)" << std::endl; }

void WrongCat::makeSound() const { std::cout << "MEOW MEOW!" << std::endl; }