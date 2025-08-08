#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
using namespace std;

class Weapon
{
	private:
		string type;

	public:
		Weapon(string type);
		string& getType();
		void setType(string newType);
};


#endif