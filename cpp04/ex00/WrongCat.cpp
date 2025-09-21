#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
		std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
		*this = other;
		std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
		if (this != &other)
		{
				WrongAnimal::operator=(other);
		}
		std::cout << "WrongCat assigned" << std::endl;
		return *this;
}

WrongCat::~WrongCat()
{
		std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
		std::cout << "WrongCat miiiiaaaaouuuu" << std::endl;
}
