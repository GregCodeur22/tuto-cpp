
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
using namespace std;

class Claptrap
{
	private:
		string name;
		int hitPoint;
		int EnergyPoint;
		int AttackDamage;
	
	public:
		Claptrap(const string& name);
		~Claptrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif