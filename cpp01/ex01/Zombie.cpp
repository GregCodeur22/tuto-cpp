#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::~Zombie()
{
	cout << name << " is destroyed " << endl;
}

void Zombie::setName(string name)
{
	this->name = name;
}
void Zombie::announce()
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}