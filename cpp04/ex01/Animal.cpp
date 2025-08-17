#include "Animal.hpp"

//constructeur par default
Animal::Animal() : type("Unknow")
{
	std::cout << "Animal created (type: " << type << ")" << std::endl;
}

//constructeur d'initialisation 
Animal::Animal(const std::string& type) : type(type)
{
	std::cout << "Animal created (type: " << type << ")" << std::endl;
}

//constructeur par copie
Animal::Animal(const Animal& rhs) : type(rhs.type)
{
	std::cout << "Animal copied" << std::endl;
}

//constructeur d'assignation 
Animal &Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

//destructeur
Animal::~Animal()
{
	std::cout << "Animal destroyed (type: " << type << ")" << std::endl;
}

//getteur setteur 
void Animal::makeSound() const 
{
	std::cout << "Animal makes some sound... " << std::endl;
}

std::string Animal::getType() const
{
	return type;
}