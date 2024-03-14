/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:45 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:46 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        //Orthodox Canonical Form
        Cat();
        Cat(const Cat& Cat);
        Cat &operator=(const Cat& Cat);
        ~Cat();

        void makeSound() const;
};
