#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	cout << "Zombie " << name << " creer. " << endl;
}

Zombie::~Zombie()
{
	cout << "Zombie " << name << " est detruit " << endl;
}

void Zombie::announce()
{
	cout << name << " : BraiiiiiiinnnzzzZ..." << endl;
}