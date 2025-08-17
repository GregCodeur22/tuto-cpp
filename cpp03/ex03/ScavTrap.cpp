#include "ScavTrap.hpp"
using namespace std;



ScavTrap::ScavTrap(const string &name) : Claptrap(name)
{
	hitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	cout << "ScavTrap " << this->name << "is created " << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << this->name << " is destroyed " << endl;
}

void ScavTrap::attack(const string &target)
{
	if (hitPoint <= 0 || EnergyPoint <= 0)
	{
		cout << "ScavTrap " << this->name << " cannot attacks " << endl;
		return;
	}
	EnergyPoint --;
	cout << "ScavTrap " << name << " fiercely attacks " << target
			 << ", causing " << AttackDamage << " points of damage!" << endl;
}

void ScavTrap::guardGard()
{
	cout << "ScavTrap " << name << " is now in gate keeper mode! " << endl;
}