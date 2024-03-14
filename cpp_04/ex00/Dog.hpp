/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:33 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:34 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        //Orthodox Canonical Form
        Dog();
        Dog(const Dog& Dog);
        Dog &operator=(const Dog& Dog);
        ~Dog();

        void makeSound() const;
};
