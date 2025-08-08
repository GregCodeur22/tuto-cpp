#ifndef ORTHODOX_HPP
#define ORTHODOX_HPP

#include <iostream>
#include <string>
using namespace std;

class Fixed
{
	private:
		int value;
		static const int integer = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& rhs);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif