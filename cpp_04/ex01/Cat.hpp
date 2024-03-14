/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:56:32 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:56:34 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        //Orthodox Canonical Form
        Cat();
        Cat(const Cat& Cat);
        Cat &operator=(const Cat& Cat);
        ~Cat();

        void makeSound() const;
};
