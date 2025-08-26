#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:
		// Non instanciable
		ScalarConverter() throw();
		ScalarConverter(const ScalarConverter &) throw();
		ScalarConverter &operator=(const ScalarConverter &) throw();
		~ScalarConverter() throw();

		// Helpers de détection et d'affichage
		static bool isChar(const std::string &);
		static bool isInt(const std::string &);
		static bool isFloat(const std::string &);
		static bool isDouble(const std::string &);
		static void printChar(double);
		static void printInt(double);
		static void printFloat(double, bool pseudo);
		static void printDouble(double, bool pseudo);

	public:
		static void convert(const std::string &literal);
};

#endif
