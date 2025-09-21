#ifndef HUMAIN_B
#define HUMAIN_B

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack();
};

#endif