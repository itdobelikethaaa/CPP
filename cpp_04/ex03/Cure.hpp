/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:52:42 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:52:44 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        //Orthodox Canonical Form
        Cure();
        Cure(const Cure& Cure);
        Cure &operator=(const Cure& Cure);
        ~Cure();

        Cure(std::string const & type);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};