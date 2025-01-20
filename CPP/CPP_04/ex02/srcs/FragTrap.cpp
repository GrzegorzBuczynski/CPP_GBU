#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << name << " copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap " << name << " assigned!" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target;
        std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
        std::cout << "FragTrap " << name << " can't attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " high fives guys!" << std::endl;
}

