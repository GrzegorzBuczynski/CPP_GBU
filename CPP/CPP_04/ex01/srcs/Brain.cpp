/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:17:29 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:17:32 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& other) 
{
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

Brain& Brain::operator=(const Brain& other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 100; ++i) 
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() 
{
    std::cout << "Brain destroyed" << std::endl;
}
