#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknow")
{
	std::cout << "WrongAnimal created (type: " << type << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& t) : type(t)
{
	std::cout << "WrongAnimal created (type: " << type << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor (type: " << type << ")" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
			this->type = other.type;
	std::cout << "WrongAnimal assigned (type: " << type << ")" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed (type: " << type << ")" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes some sound..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
