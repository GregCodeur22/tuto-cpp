#include "Claptrap.hpp"

#include "Claptrap.hpp"

// --- Constructeurs ---

Claptrap::Claptrap() {}

Claptrap::Claptrap(const std::string& name)
{
		this->name = name;
		this->hitPoint = 10;
		this->EnergyPoint = 10;
		this->AttackDamage = 0;
		std::cout << "Claptrap " << this->name << " is created!" << std::endl; 
}

Claptrap::Claptrap(const Claptrap& other)
{
		*this = other;
		std::cout << "Claptrap " << this->name << " copy constructed!" << std::endl;
}

Claptrap& Claptrap::operator=(const Claptrap& other)
{
		if (this != &other)
		{
				this->name = other.name;
				this->hitPoint = other.hitPoint;
				this->EnergyPoint = other.EnergyPoint;
				this->AttackDamage = other.AttackDamage;
		}
		std::cout << "Claptrap " << this->name << " assigned!" << std::endl;
		return *this;
}

Claptrap::~Claptrap()
{
		std::cout << "Claptrap " << this->name << " is destroyed " << std::endl;
}

void Claptrap::attack(const std::string& target)
{
		if (hitPoint <= 0 || EnergyPoint <= 0)
		{
				std::cout << "Claptrap " << name << " cannot attack " << std::endl;
				return;
		}
		EnergyPoint--;
		std::cout << "Claptrap " << name << " attacks " << target
							<< ", causing " << AttackDamage << " point of damage! " << std::endl; 
}

void Claptrap::takeDamage(unsigned int amount)
{
		hitPoint -= amount;
		if (hitPoint < 0)
				hitPoint = 0;
		std::cout << "Claptrap " << name << " takes " << amount
							<< " damage (HP left: " << hitPoint << ")" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
		if (hitPoint <= 0 || EnergyPoint <= 0)
		{
				std::cout << "Claptrap " << name << " cannot repair (No HP or energy)" << std::endl;
				return;
		}
		hitPoint += amount;
		EnergyPoint--;
		std::cout << "Claptrap " << name << " repairs itself for " << amount 
							<< " HP! (HP now: " << hitPoint << ")" << std::endl; 
}
