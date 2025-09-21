#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int value;
		static const int integer = 8;

	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& rhs);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif