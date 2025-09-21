#include "Weapon.hpp"

Weapon::Weapon(string type) : type(type) {};

const string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const string &newType)
{
	type = newType;
}
