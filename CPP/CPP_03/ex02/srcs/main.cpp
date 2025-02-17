/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:13:43 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:13:44 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main() 
{
    FragTrap fragtrap("ABC");

    // Actions
    fragtrap.attack("Target1");
    fragtrap.takeDamage(42);
    fragtrap.beRepaired(21);
    
    // More actions
    fragtrap.attack("Target2");
    fragtrap.takeDamage(600);
    fragtrap.beRepaired(20);

    // Special ability
    fragtrap.highFivesGuys();

    return 0;
}
