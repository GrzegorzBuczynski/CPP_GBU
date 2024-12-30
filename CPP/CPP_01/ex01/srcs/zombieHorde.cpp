/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:54:20 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/12/30 20:43:24 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string itos(int n)
{
    std::string buffer;
    bool isNegative = false;

    if (n == 0)
        return "0";
    if (n < 0) {
        isNegative = true;
        n = -n;
    }
    while (n != 0) {
        buffer.insert(buffer.begin(), (n % 10) + '0');
        n /= 10;
    }
    if (isNegative)
        buffer.insert(buffer.begin(), '-');

    return buffer;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string nbr = itos(i + 1);
		zombies[i].setName(name + " " + nbr);
	}
	return (zombies);
}

// static_cast<char>(i + 1 + 48
