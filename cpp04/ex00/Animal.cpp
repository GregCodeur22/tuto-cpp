#include "Animal.hpp"

Animal::Animal() : type("unknow")
{
    std::cout << "Animal created (type: " << type << ")" << std::endl;
}

Animal::Animal(const std::string& t) : type(t)
{
    std::cout << "Animal created (type: " << type << ")" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
    *this = rhs;
    std::cout << "Animal copy constructor (type: " << type << ")" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Animal assigned (type: " << type << ")" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed (type: " << type << ")" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes some sound..." << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
