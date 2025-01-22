/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:09:09 by gbuczyns          #+#    #+#             */
/*   Updated: 2025/01/22 14:09:12 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

# include <string>
# include <iostream>
# include <sstream>

class Zombie
{
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
        void setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
