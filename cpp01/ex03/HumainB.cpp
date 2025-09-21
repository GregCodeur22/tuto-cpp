#include "HumainB.hpp"

HumanB::HumanB(string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << "attack with " << weapon->getType() << std::endl;
	else
		std::cout << name << "has no weapon to attack " << std::endl;
}