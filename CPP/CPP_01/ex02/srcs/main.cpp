/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:08:40 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/02 17:14:44 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Value of the string variable: ";
    std::cout << str <<  std::endl;
    std::cout << "Memory address of the string variable: ";
    std::cout << &str << std::endl;
    std::cout << "Value pointed to by stringPTR: ";
    std::cout << *stringPTR << std::endl;
    std::cout << "Memory address held by stringPTR: ";
    std::cout << stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: ";
    std::cout << stringREF << std::endl;
    std::cout << "Memory address held by stringREF: ";
    std::cout << &stringREF << std::endl;
}
