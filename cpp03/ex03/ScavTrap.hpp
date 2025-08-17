#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : virtual public Claptrap
{
	public:
		ScavTrap();
		ScavTrap(const string& name);
		~ScavTrap();

		void attack(const string& target);
		void guardGard();
};

#endif