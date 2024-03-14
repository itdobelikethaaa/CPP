/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 03:44:36 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 03:47:01 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("OMAR");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3;
    claptrap3 = claptrap2;
    claptrap.attack("ENEMY");
    claptrap.takeDamage(50);
    claptrap.beRepaired(7);
    return (0);
}
