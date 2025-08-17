#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "Claptrap.hpp"
#include <iostream>

class FragTrap : public Claptrap
{
	public:
		FragTrap(const string& name);
		~FragTrap();

		void hightFivesGuys(void);
};

#endif