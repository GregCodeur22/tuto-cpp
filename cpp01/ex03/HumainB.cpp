#include "HumainB.hpp"

HumanB::HumanB(string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (weapon)
		cout << name << "attack with their " << weapon->getType() << endl;
	else
		cout << name << "has no weapon to attack " << endl;
}