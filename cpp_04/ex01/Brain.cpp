/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:56:49 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:56:51 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Default Constructor called (Brain)" << std::endl; }

Brain::Brain(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
	std::cout << "Copy Constructor called (Brain)" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    if (this != &brain)
    {
        for (size_t i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    std::cout << "Assignation operator called (Brain)" << std::endl;
	return (*this);
}

Brain::~Brain() { std::cout << "Destructor called (Brain)" << std::endl; }