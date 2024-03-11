/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:35:47 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/10 19:03:46 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack()
{
    if (this->weapon == NULL)
    {
        std::cout << this->name << " has no weapon" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}