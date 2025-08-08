#include "Weapon.hpp"

Weapon::Weapon(string type) : type(type) {};

string& Weapon::getType() {
    return type;
}

void Weapon::setType(string newType)
{
	type = newType;
}