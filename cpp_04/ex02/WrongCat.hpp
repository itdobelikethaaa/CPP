/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:53:21 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:53:23 by ofarhat          ###   ########.fr       */
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