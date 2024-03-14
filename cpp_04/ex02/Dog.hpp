/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:54:03 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:54:05 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        //Orthodox Canonical Form
        Dog();
        Dog(const Dog& Dog);
        Dog &operator=(const Dog& Dog);
        ~Dog();

        void makeSound() const;
};
