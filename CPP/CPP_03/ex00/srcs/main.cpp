/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:12:17 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:27:52 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("ABC");

    claptrap.attack("Target1");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    claptrap.attack("Target2");
    claptrap.takeDamage(100);
    claptrap.beRepaired(50);

    return 0;
}
