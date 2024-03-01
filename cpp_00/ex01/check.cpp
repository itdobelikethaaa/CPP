/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:32:46 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/01 19:32:54 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int isName(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isprint(str[i]))
            return 0;
    }
    return 1;
}

int allSpaces(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return 0;
    }
    return 1;
}

int isNumber(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return 0;
    }
    return 1;
}
