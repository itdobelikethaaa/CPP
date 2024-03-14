/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:53:12 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:53:14 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& AMateria) { this->_type = AMateria._type; }

AMateria &AMateria::operator=(const AMateria& AMateria)
{
    this->_type = AMateria._type;
    return (*this);
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type) { this->_type = type; }

std::string const &AMateria::getType() const { return (this->_type); }

void AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria " << target.getName() << "’s default *" << std::endl;
}