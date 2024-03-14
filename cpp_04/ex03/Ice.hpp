/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:51:06 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:51:07 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        //Orthodox Canonical Form
        Ice();
        Ice(const Ice& Ice);
        Ice &operator=(const Ice& Ice);
        ~Ice();

        Ice(std::string const & type);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};