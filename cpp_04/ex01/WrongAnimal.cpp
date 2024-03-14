/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:55:43 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:55:44 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& WrongAnimal)
{
    this->type = WrongAnimal.type;
    std::cout << "Copy Constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& WrongAnimal)
{
    if (this != &WrongAnimal)
        this->type = WrongAnimal.type;
    return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "Destructor called (WrongAnimal)" << std::endl; }

std::string WrongAnimal::getType() const { return (this->type); }

void WrongAnimal::makeSound() const { std::cout << "There is no sound! (WrongAnimal)" << std::endl; }
