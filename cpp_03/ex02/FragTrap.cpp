/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:45:38 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 03:45:40 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_name = "default (FragTrap)";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Default Constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap) : ClapTrap(FragTrap)
{
    std::cout << "Copy Constructor called (FragTrap)" << std::endl;
    *this = FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap& FragTrap)
{
    if (this != &FragTrap)
    {
        this->_name = FragTrap._name;
        this->_hitPoints = FragTrap._hitPoints;
        this->_energyPoints = FragTrap._energyPoints;
        this->_attackDamage = FragTrap._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "Constructor with name called (FragTrap)" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
}