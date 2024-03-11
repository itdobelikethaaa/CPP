/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:15:37 by ofarhat           #+#    #+#             */
/*   Updated: 2024/03/10 23:15:39 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void sed( char const *argv[], std::ifstream &file)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string textFile;
    std::string text_tmp;

    std::getline(file, textFile, '\0');
    if (s1.empty() || textFile.empty())
    {
        std::cout << "Error: is empty" << std::endl;
        exit(1);
    }
    size_t pos = textFile.find(s1);
    while (pos != std::string::npos)
    {
        text_tmp = textFile.substr(pos + s1.length());
        textFile = textFile.substr(0, pos) + s2 + text_tmp;
        pos = textFile.find(s1, pos + s2.length());
    }
    std::ofstream newFile(std::string(argv[1]) + ".replace");
    newFile << textFile;
    file.close();
    newFile.close();
}