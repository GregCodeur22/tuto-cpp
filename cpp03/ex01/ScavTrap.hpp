#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public Claptrap
{
	public:
		ScavTrap(const string& name);
		~ScavTrap();

		void attack(const string& target);
		void guardGard();
};

#endif