/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:55:17 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:55:18 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        //Orthodox Canonical Form
        WrongCat();
        WrongCat(const WrongCat& WrongCat);
        WrongCat &operator=(const WrongCat& WrongCat);
        ~WrongCat();

        void makeSound() const;
};