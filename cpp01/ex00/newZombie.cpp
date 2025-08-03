#include "NewZombie.h"

Zombie* newZombie(string name)
{
	Zombie* z = new Zombie(name);
	return z;
}