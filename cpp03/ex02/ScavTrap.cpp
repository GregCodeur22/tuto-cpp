#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : Claptrap() {}

ScavTrap::ScavTrap(const std::string &name) : Claptrap(name)
{
		hitPoint = 100;
		EnergyPoint = 50;
		AttackDamage = 20;
		std::cout << "ScavTrap " << this->name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : Claptrap(other)
{
		std::cout << "ScavTrap " << this->name << " copy constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
		if (this != &other)
		{
				Claptrap::operator=(other);
		}
		std::cout << "ScavTrap " << this->name << " assigned!" << std::endl;
		return *this;
}

ScavTrap::~ScavTrap()
{
		std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
		if (hitPoint <= 0 || EnergyPoint <= 0)
		{
				std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
				return;
		}
		EnergyPoint--;
		std::cout << "ScavTrap " << name << " fiercely attacks " << target
				 << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
