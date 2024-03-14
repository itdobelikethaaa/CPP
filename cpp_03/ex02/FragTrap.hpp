/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:45:44 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 03:45:45 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //Orthodox Canonical Form
        FragTrap();
        FragTrap(const FragTrap& fragtrap);
        FragTrap &operator=(const FragTrap& fragtrap);
        ~FragTrap();

        FragTrap(std::string name);
        void highFivesGuys(void);
};

#endif