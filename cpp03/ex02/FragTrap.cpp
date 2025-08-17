#include "FragTrap.hpp"
using namespace std;

FragTrap::FragTrap(const string& name) : Claptrap(name)
{
	hitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	cout << "FragTrap " << name << "is created" << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << name << "is destroyed " << endl;
}

void FragTrap::hightFivesGuys(void)
{
	cout << "FragTrap " << name << "request a positive hight five " << endl;
}