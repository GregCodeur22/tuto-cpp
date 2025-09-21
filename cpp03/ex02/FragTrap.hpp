#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "Claptrap.hpp"
#include <iostream>

class FragTrap : public Claptrap
{
		public:
				FragTrap();
				FragTrap(const std::string& name);
				FragTrap(const FragTrap& other);
				FragTrap& operator=(const FragTrap& other);
				~FragTrap();

				void highFivesGuys(void);
};

#endif
