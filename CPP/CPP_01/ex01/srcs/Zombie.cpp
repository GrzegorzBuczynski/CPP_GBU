/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:20:42 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/30 20:15:59 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}
Zombie::Zombie() {}
Zombie::~Zombie()
{
    std::cout << name << " is destroyed";
    std::cout << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
