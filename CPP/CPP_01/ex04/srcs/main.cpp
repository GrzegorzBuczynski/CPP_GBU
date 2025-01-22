/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:23:18 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:22:08 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Incorrect arguments ";
		std::cerr << "./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
	{
		std::cerr << "Error: The search string cannot be empty." << std::endl;
		return (1);
	}
    
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }
    
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();
    inputFile.close();

    replaceOccurrences(content, s1, s2);
    
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile)
    {
        std::cerr << "Error: Could not create output file " << filename;
        std::cerr << ".replace" << std::endl;
        return 1;
    }
    
    outputFile << content;
    outputFile.close();
    
    return 0;
}
