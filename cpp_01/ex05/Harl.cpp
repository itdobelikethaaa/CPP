/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:34:17 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/11 16:58:46 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]\nI love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    this->ptrFun[0] = &Harl::debug;
    this->ptrFun[1] = &Harl::info;
    this->ptrFun[2] = &Harl::warning;
    this->ptrFun[3] = &Harl::error;

    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == lvl[i])
        {
            (this->*ptrFun[i])();
            return ;
        }
    }
    std::cout << "NOT A VALID LEVEL" << std::endl;
}