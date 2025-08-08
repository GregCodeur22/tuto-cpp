#include "Zombie.hpp"

Zombie* ZombieHorde(int N, string name)
{
	if (N <= 0)
		return (nullptr);

	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}