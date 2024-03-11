/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 03:30:52 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/09 23:14:02 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie* zombie = zombieHorde(3, "Omar");
    for (int i = 0; i < 3; i++)
        zombie[i].announce();
    delete[] zombie;
    return (0);
}