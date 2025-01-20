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