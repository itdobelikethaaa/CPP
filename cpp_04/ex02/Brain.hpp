/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:54:24 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/14 17:54:26 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        //Orthodox Canonical Form
        Brain();
        Brain(const Brain& Brain);
        Brain &operator=(const Brain& Brain);
        ~Brain();
        
};
