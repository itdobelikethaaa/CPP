/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:49 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:51 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default Constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat& Cat) : Animal(Cat)
{
    std::cout << "Copy Constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat& Cat)
{
    if (this != &Cat)
        this->type = Cat.type;
    return (*this);
}

Cat::~Cat() { std::cout << "Destructor called (Cat)" << std::endl; }

void Cat::makeSound() const { std::cout << "MEOW MEOW!" << std::endl; }
