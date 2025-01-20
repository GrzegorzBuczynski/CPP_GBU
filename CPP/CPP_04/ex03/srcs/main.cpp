# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamondtrap("ABC03");

    // Actions
    diamondtrap.attack("Target1");
    diamondtrap.takeDamage(20);
    diamondtrap.beRepaired(10);

    // More Actions
    diamondtrap.attack("Target2");
    diamondtrap.takeDamage(700);
    diamondtrap.beRepaired(40);

    // Special Ability
    diamondtrap.whoAmI();

    return 0;
}
