#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : Claptrap() {}

FragTrap::FragTrap(const std::string& name) : Claptrap(name)
{
		hitPoint = 100;
		EnergyPoint = 100;
		AttackDamage = 30;
		std::cout << "FragTrap " << name << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : Claptrap(other)
{
		std::cout << "FragTrap " << name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
		if (this != &other)
		{
				Claptrap::operator=(other);
		}
		std::cout << "FragTrap " << name << " assigned!" << std::endl;
		return *this;
}

FragTrap::~FragTrap()
{
		std::cout << "FragTrap " << name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
		std::cout << "FragTrap " << name << " high five!" << std::endl;
}
