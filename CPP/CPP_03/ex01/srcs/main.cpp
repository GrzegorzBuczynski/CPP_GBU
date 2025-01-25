/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:12:47 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/25 17:09:08 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("LLU");

    scavTrap.attack("Target1");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(5);

    scavTrap.attack("Target2");
    scavTrap.takeDamage(100);
    scavTrap.beRepaired(50);

    scavTrap.guardGate();

    return 0;
}
