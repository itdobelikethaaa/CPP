/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 03:30:46 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/09 23:13:40 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) { std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie() {}

void Zombie::setName( std::string const& name ) { this->name = name; }

Zombie::~Zombie( void ) { std::cout << this->name << " is destroyed" << std::endl; }