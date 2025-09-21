#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public Claptrap
{
		public:
				ScavTrap();
				ScavTrap(const ScavTrap& other);
				ScavTrap& operator=(const ScavTrap& other);
				~ScavTrap();

				ScavTrap(const std::string& name);

				void attack(const std::string& target);
				void guardGate();
};

#endif
