/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:54:08 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:54:10 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default Constructor called (Dog)" << std::endl;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
    this->brain = new Brain(*Dog.brain);
    std::cout << "Copy Constructor called (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog& Dog)
{
    if (this != &Dog)
        *this->brain = *Dog.brain;
    return (*this);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Destructor called (Dog)" << std::endl;
}

void Dog::makeSound() const { std::cout << "WOOF WOOF!" << std::endl; }