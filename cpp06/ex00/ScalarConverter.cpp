#include "ScalarConverter.hpp"
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <cmath>

ScalarConverter::ScalarConverter() throw() {}
ScalarConverter::ScalarConverter(const ScalarConverter &) throw() {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) throw() { return *this; }
ScalarConverter::~ScalarConverter() throw() {}

static bool isPseudoLiteral(const std::string &s)
{
	return (s == "nan" || s == "nanf" ||
					s == "+inf" || s == "+inff" ||
					s == "-inf" || s == "-inff");
}

bool ScalarConverter::isChar(const std::string &s)
{
	return (s.size() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])));
}

bool ScalarConverter::isInt(const std::string &s)
{
	char *end = 0;
	std::strtol(s.c_str(), &end, 10);
	return (*end == '\0');
}

bool ScalarConverter::isFloat(const std::string &s)
{
	if (isPseudoLiteral(s) && s.size() > 0 && s[s.size() - 1] == 'f')
		return true;
	char *end = 0;
	std::strtof(s.c_str(), &end);
	return (*end == 'f' && *(end + 1) == '\0');
}

bool ScalarConverter::isDouble(const std::string &s)
{
	if (isPseudoLiteral(s) && s.size() > 0 && s[s.size() - 1] != 'f')
		return true;
	char *end = 0;
	std::strtod(s.c_str(), &end);
	return (*end == '\0');
}

void ScalarConverter::printChar(double d)
{
	std::cout << "char: ";
	if (std::isnan(d) || d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
	{
		std::cout << "impossible\n";
	}
	else if (std::isprint(static_cast<char>(d)))
	{
		std::cout << "'" << static_cast<char>(d) << "'\n";
	}
	else
	{
		std::cout << "Non displayable\n";
	}
}

void ScalarConverter::printInt(double d)
{
	std::cout << "int: ";
	if (std::isnan(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
	{
		std::cout << "impossible\n";
	}
	else
	{
		std::cout << static_cast<int>(d) << "\n";
	}
}

void ScalarConverter::printFloat(double d, bool pseudo)
{
	std::cout << "float: ";
	if (pseudo)
	{
		if (std::isnan(d))
			std::cout << "nanf\n";
		else if (d == std::numeric_limits<float>::infinity())
			std::cout << "+inff\n";
		else if (d == -std::numeric_limits<float>::infinity())
			std::cout << "-inff\n";
		return;
	}
	float f = static_cast<float>(d);
	std::cout << f;
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << "f\n";
}

void ScalarConverter::printDouble(double d, bool pseudo)
{
	std::cout << "double: ";
	if (pseudo)
	{
		if (std::isnan(d))
			std::cout << "nan\n";
		else if (d == std::numeric_limits<double>::infinity())
			std::cout << "+inf\n";
		else if (d == -std::numeric_limits<double>::infinity())
			std::cout << "-inf\n";
		return;
	}
	std::cout << d;
	if (d == static_cast<int>(d))
		std::cout << ".0";
	std::cout << "\n";
}

void ScalarConverter::convert(const std::string &lit)
{
	double d = 0.0;
	bool pseudo = isPseudoLiteral(lit);

	if (isChar(lit))
	{
		d = static_cast<unsigned char>(lit[0]);
	}
	else if (isInt(lit))
	{
		d = std::strtol(lit.c_str(), 0, 10);
	}
	else if (isFloat(lit))
	{
		d = std::strtof(lit.c_str(), 0);
	}
	else if (isDouble(lit))
	{
		d = std::strtod(lit.c_str(), 0);
	}
	else if (pseudo)
	{
		if (lit.find('-') == 0)
			d = -std::numeric_limits<double>::infinity();
		else if (lit.find('+') == 0)
			d = std::numeric_limits<double>::infinity();
		else
			d = std::numeric_limits<double>::quiet_NaN();
	}
	else
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
		return;
	}

	printChar(d);
	printInt(d);
	printFloat(d, pseudo);
	printDouble(d, pseudo);
}
