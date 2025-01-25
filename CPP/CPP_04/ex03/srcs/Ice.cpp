/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICE.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:17:12 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/23 16:18:03 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & other) : AMateria(other) {}

Ice& Ice::operator=(Ice const & other) 
{
    if (this != &other) 
        AMateria::operator=(other);
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
