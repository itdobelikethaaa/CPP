/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:44:47 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 04:01:12 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "default";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& claptrap)
{
    if (this != &claptrap)
    {
        this->_name = claptrap._name;
        this->_hitPoints = claptrap._hitPoints;
        this->_energyPoints = claptrap._energyPoints;
        this->_attackDamage = claptrap._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Constructor with name called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead or has no energy points" << std::endl;
        return ;
    }
    std::cout << "Energy points before attack: " << this->_energyPoints << std::endl;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
    std::cout << "Energy points after attack: " << this->_energyPoints << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead or has no energy points" << std::endl;
        return ;
    }
    std::cout << "Hit points before taking damage: " << this->_hitPoints << std::endl;
    std::cout << "ClapTrap "<< this->_name << " Takes " << amount << " of damage" << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
    std::cout << "Hit points after taking damage: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead or has no energy points" << std::endl;
        return ;
    }
    std::cout << "Hit points before repairing: " << this->_hitPoints << std::endl;
    std::cout << "Energy points before repairing: " << this->_energyPoints << std::endl;
    std::cout << "ClapTrap "<< this->_name << " Takes " << amount << " to repair himself" << std::endl;
    this->_hitPoints += amount;
    std::cout << "Hit points after repairing: " << this->_hitPoints << std::endl;
    this->_energyPoints--;
    std::cout << "Energy points after repairing: " << this->_energyPoints << std::endl;
}