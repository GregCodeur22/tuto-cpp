#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
using namespace std;

class Zombie
{
	private:
		string name;

	public:
		Zombie();
		~Zombie();

		void setName(string name);
		void announce();
};

#endif