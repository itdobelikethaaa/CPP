/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:15:52 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/11 17:12:22 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::ifstream file(argv[1]);
        if (file.is_open())
            sed(argv, file);
        else
            std::cout << "Error: " << argv[1] << " file not opened" << std::endl;
    }
    else
        std::cout << "Error:\nUsage: ./sed <filename> <string to replace> <string to replace with>" << std::endl;
    return 0;
}
