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