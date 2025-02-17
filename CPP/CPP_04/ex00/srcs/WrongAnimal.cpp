/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:16:28 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:16:30 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") 
{
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) 
{
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) 
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal assigned" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const 
{
    return type;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal sound" << std::endl;
}
