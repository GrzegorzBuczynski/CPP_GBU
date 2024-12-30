/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:20:30 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/30 20:44:15 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
    int N = 11;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    if (horde != NULL)
    {
        for (int i = 0; i < N; i++)
            horde[i].announce();
        delete[] horde;
    }
    else
    {
        std::cerr << "Failed to create zombie horde";
        std::cerr << std::endl;
    }
    return 0;
}
