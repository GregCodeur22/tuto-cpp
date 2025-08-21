#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::~AMateria() {};

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& other) : _type(other._type) {}


std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "uses materia " << std::endl;
}