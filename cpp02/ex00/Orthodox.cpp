#include "Orthodox.hpp"
#include "iostream"


Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : value(other.value)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
	cout << "Copy assignement operator called" << endl;
	if (this != &rhs)
		this->value = rhs.value;
	return *this;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return this->value;
}


void Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called" << endl;
	this->value = raw;
}