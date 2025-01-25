/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:12:12 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/25 17:08:34 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
        : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
        : name(other.name), hitPoints(other.hitPoints), 
            energyPoints(other.energyPoints), attackDamage(other.attackDamage) 
{
    std::cout << "ClapTrap " << name << " copied!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
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

void ClapTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target;
        std::cout << ", causing " << attackDamage;
        std::cout << " points of damage!" << std::endl;
    }
    else
    {   std::cout << "ClapTrap " << name << " cannot attack ";
        std::cout << target << "!" << std::endl;}
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount;
    std::cout << " points of damage! Current hit points: ";
    std::cout << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints > 0&& energyPoints > 0)
    {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount;
        std::cout << " points! Current hit points: " << hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " cannot be repaired!" << std::endl;
}
