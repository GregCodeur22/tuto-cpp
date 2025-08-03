#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "NewZombie.h"
#include "RandomChump.h"

int main()
{
	Zombie* heapZombie = newZombie("ZombieHeap");
	heapZombie->announce();
	delete(heapZombie);

	randomChump("stackZombie");
	
	return (0);
}