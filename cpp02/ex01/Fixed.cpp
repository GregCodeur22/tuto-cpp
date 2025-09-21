#include "Fixed.hpp"
#include "iostream"
#include <cmath>

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
		value = roundf(floatValue * (1 << integer));
}

Fixed::Fixed(const Fixed& other) : value(other.value)
{
		std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->value = rhs.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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

