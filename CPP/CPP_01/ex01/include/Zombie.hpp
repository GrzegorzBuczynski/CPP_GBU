
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
