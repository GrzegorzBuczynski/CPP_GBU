/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:20:36 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/23 16:49:26 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; ++i) 
        templates[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & other) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (other.templates[i]) 
            templates[i] = other.templates[i]->clone();
        else 
            templates[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 4; ++i) 
        {
            if (templates[i]) 
                delete templates[i];
            if (other.templates[i]) 
                templates[i] = other.templates[i]->clone();
            else 
                templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (templates[i]) 
            delete templates[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (!templates[i])
        {
            templates[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; ++i) 
    {
        if (templates[i] && templates[i]->getType() == type) 
            return templates[i]->clone();
    }
    return NULL;
}
