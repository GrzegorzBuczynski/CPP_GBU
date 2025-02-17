/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:06:10 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/23 16:14:49 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() : name("") 
{
    for (int i = 0; i < 4; ++i) 
        inventory[i] = NULL;
}

Character::Character(std::string const& name) : name(name) 
{
    for (int i = 0; i < 4; ++i) 
        inventory[i] = NULL;
}

Character::Character(Character const& other) : name(other.name) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (other.inventory[i]) 
            inventory[i] = other.inventory[i]->clone();
        else 
            inventory[i] = NULL;
    }
}

Character& Character::operator=(Character const & other) 
{
    if (this != &other) 
    {
        name = other.name;
        for (int i = 0; i < 4; ++i) 
        {
            if (inventory[i]) 
                delete inventory[i];
            if (other.inventory[i]) 
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (inventory[i]) 
        {
            delete inventory[i];
        }
    }
}

std::string const& Character::getName() const 
{
    return name;
}

void Character::equip(AMateria* m) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (!inventory[i]) 
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4) 
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && inventory[idx]) 
        inventory[idx]->use(target);
}
