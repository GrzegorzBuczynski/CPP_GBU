/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:03:47 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/23 16:05:44 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {}
AMateria::AMateria(std::string const& type) : type(type) {}
AMateria::AMateria(AMateria const& other) : type(other.type) {}
AMateria& AMateria::operator=(AMateria const & other) 
{
    if (this != &other)
        type = other.type;
    return *this;
}
AMateria::~AMateria() {}
std::string const& AMateria::getType() const 
{
    return type;
}
void AMateria::use(ICharacter& target) 
{
    (void)target;
}
