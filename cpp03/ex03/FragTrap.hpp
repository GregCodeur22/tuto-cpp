#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "Claptrap.hpp"
#include <iostream>

class FragTrap : virtual public Claptrap
{
	public:
		FragTrap();
		FragTrap(const string& name);
		~FragTrap();

		void hightFivesGuys(void);
};

#endif