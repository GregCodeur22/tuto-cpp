#include "Claptrap.hpp"

Claptrap::Claptrap(const string& name)
{
	this->name = name;
	this->hitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
	cout << "Claptrap " << this->name << " is created!" << endl; 
}

Claptrap::~Claptrap()
{
	cout << "Claptrap " << this->name << " is destroyed " << endl;
}

void Claptrap::attack(const string& target)
{
	if (hitPoint <= 0 || EnergyPoint <= 0)
	{
		cout << "Claptrap " << name << "cannot attack " << endl;
		return ;
	}
	EnergyPoint--;
	cout << "Claptrap " << name << " attacks " <<  target
			 << " cause " << AttackDamage << " point of dammage! " << endl; 
}

void Claptrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount;
	if (hitPoint < 0)
		hitPoint = 0;
	cout << "Claptrap " << name << " takes " << amount
			 << " damage (HP left: " << hitPoint << ")" << endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
	if (hitPoint <= 0 || EnergyPoint <= 0)
	{
		cout << "Claptrap " << name << " cannot repair (No HP or energy)" << endl;
		return ;
	}
	hitPoint += amount;
	EnergyPoint--;
	cout << "Claptrap " << name << " repair itself for " << amount << "HP! (hp NOW: "
			 << hitPoint << ")" << endl; 
}