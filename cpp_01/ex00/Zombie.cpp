/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:37:48 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/06 18:39:19 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) { std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie( std::string const& name ) { this->name = name; }

Zombie::~Zombie( void ) { std::cout << this->name << " is destroyed" << std::endl; }