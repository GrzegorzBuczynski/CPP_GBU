/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:14:26 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:14:28 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
        : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
        : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints),
            attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if  (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " assigned!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints > 0&& energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target;
        std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "CalpTrap " << name << " can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    std::cout << "Current hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "ClapTrap " << name << " can't be repaired!" << std::endl;
}
