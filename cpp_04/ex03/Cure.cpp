/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:52:48 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:52:50 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() { this->_type = "cure"; }

Cure::Cure(const Cure& Cure) : AMateria(Cure) {}

Cure &Cure::operator=(const Cure& Cure)
{
    this->_type = Cure._type;
    return (*this);
}

Cure::~Cure() {}

Cure::Cure(std::string const & type) : AMateria(type) {}

AMateria* Cure::clone() const { return (new Cure()); }

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}