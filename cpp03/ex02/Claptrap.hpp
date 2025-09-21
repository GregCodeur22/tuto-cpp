
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class Claptrap
{
	protected:
		std::string name;
		int hitPoint;
		int EnergyPoint;
		int AttackDamage;
	
	public:
		Claptrap();
		Claptrap(const Claptrap& other);
    Claptrap& operator=(const Claptrap& other);
		~Claptrap();
		Claptrap(const std::string& name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif