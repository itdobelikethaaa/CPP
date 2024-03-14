/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:55:35 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:55:37 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //Orthodox Canonical Form
        WrongAnimal();
        WrongAnimal(const WrongAnimal& WrongAnimal);
        WrongAnimal &operator=(const WrongAnimal& WrongAnimal);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};
