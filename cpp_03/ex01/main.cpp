/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:44:59 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 04:21:53 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavtrap("OMAR");
    ScavTrap a2;
    a2 = scavtrap;
    a2.attack("ENEMY");
    
    a2.takeDamage(5);
    a2.guardGate();
    
    return (0);
}
