/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:27:30 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/12/30 20:17:51 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/**
 * @brief The main function demonstrating the creation and announcement of zombies.
 * 
 * Creates a zombie on the heap, makes it announce itself, and then deletes it.
 * Creates a zombie on the stack, makes it announce itself, and it is automatically destroyed when it goes out of scope.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() 
{
    int N = 10;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    if (horde != NULL) 
    {
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }
        delete[] horde;
    }
    else 
    {
        std::cerr   << "Failed to create zombie horde" 
                    << std::endl;
    }

    return 0;
}
