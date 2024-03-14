/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:45:17 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 03:45:19 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //Orthodox Canonical Form
        ScavTrap();
        ScavTrap(const ScavTrap& claptrap);
        ScavTrap &operator=(const ScavTrap& claptrap);
        ~ScavTrap();

        ScavTrap(std::string name);
        void attack(const std::string& target);
        void guardGate();
};

#endif
