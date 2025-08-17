#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap(const std::string &name);
	~DiamondTrap();

	void attack(const std::string &target);


	void guardGate();
	void highFivesGuys();

	void whoAmI();
};

#endif