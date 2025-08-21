#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bob("bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Execption: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat alice("Alice", 151);
	}
	catch(std::exception &e)
	{
		std::cerr << "Execption:  " << e.what() << std::endl;
	}
	return (0);
}