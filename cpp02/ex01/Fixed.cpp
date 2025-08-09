#include "Fixed.hpp"
#include "iostream"
#include <cmath>  // pour roundf

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    std::cout << "Int constructor called" << std::endl;
    value = intValue << integer;
}

Fixed::Fixed(const float floatValue) {
    std::cout << "Float constructor called" << std::endl;
    value = roundf(floatValue * (1 << integer)); // Convertit float en fixed point
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

float Fixed::toFloat(void) const
{
    return (float)value / (1 << integer);
}

int Fixed::toInt(void) const
{
    return value >> integer;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}