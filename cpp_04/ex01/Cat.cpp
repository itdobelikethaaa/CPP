/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:56:37 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:56:39 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default Constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat& Cat) : Animal(Cat)
{
    this->brain = new Brain(*Cat.brain);
    std::cout << "Copy Constructor called (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat& Cat)
{
    if (this != &Cat)
        *this->brain = *Cat.brain;
    return (*this);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Destructor called (Cat)" << std::endl;
}

void Cat::makeSound() const { std::cout << "MEOW MEOW!" << std::endl; }
