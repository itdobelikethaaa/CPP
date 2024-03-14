/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:39 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:40 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
    std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog& Dog)
{
    if (this != &Dog)
        this->type = Dog.type;
    return (*this);
}

Dog::~Dog() { std::cout << "Destructor called (Dog)" << std::endl; }

void Dog::makeSound() const { std::cout << "WOOF WOOF!" << std::endl; }