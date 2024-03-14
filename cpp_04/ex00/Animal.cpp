/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:59:01 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:59:03 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default Constructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal& Animal)
{
    this->type = Animal.type;
    std::cout << "Copy Constructor called (Animal)" << std::endl;
}

Animal &Animal::operator=(const Animal& Animal)
{
    if (this != &Animal)
        this->type = Animal.type;
    return (*this);
}

Animal::~Animal() { std::cout << "Destructor called (Animal)" << std::endl; }

std::string Animal::getType() const { return (this->type); }

void Animal::makeSound() const { std::cout << "There is no sound! (Animal)" << std::endl; }
