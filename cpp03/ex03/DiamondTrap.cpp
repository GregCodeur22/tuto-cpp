#include "DiamondTrap.hpp"
#include <iostream>

// Constructeur
DiamondTrap::DiamondTrap(const std::string& name)
    : Claptrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), name(name)
{
    hitPoint = FragTrap::hitPoint;
    EnergyPoint = ScavTrap::EnergyPoint;
    AttackDamage = FragTrap::AttackDamage;

    std::cout << "DiamondTrap " << this->name << " is created!" << std::endl;
}

// Destructeur
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " is destroyed!" << std::endl;
}

// Override attack() : utilise ScavTrap::attack pour éviter ambiguïté
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

// Wrapper : appelle ScavTrap::guardGate()
void DiamondTrap::guardGate()
{
    ScavTrap::guardGard();
}

// Wrapper : appelle FragTrap::highFivesGuys()
void DiamondTrap::highFivesGuys()
{
    FragTrap::hightFivesGuys();
}

// Affiche le nom propre et celui de Claptrap
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << name << ", ClapTrap name: " << Claptrap::name << std::endl;
}
