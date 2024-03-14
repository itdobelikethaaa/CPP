/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:58:55 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:58:57 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        //Orthodox Canonical Form
        Animal();
        Animal(const Animal& Animal);
        Animal &operator=(const Animal& Animal);
        virtual ~Animal();

        std::string getType() const;
        virtual void makeSound() const;
};
