#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(0));

	try
	{
		Bureaucrat bob("Bob", 140);
		Bureaucrat alice("Alice", 40);
		Bureaucrat charlie("Charlie", 1);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm robot("Marvin");
		PresidentialPardonForm pardon("Ford");

		std::cout << shrub << std::endl;
		std::cout << robot << std::endl;
		std::cout << pardon << std::endl;

		bob.signForm(shrub); //145
		alice.signForm(robot); //40
		charlie.signForm(pardon);//1

		std::cout << "\n--- Tentatives d'exécution ---\n";

		try
		{
			shrub.execute(bob); //137
			std::cout << bob.getName() << " executed " << shrub.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << bob.getName() << " couldn’t execute " << shrub.getName()
			<< " because " << e.what() << std::endl;
		}

		try
		{
			shrub.execute(charlie); 
			std::cout << charlie.getName() << " executed " << shrub.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << charlie.getName() << " couldn’t execute " << shrub.getName()
			<< " because " << e.what() << std::endl;
		}

		try
		{
			robot.execute(alice); 
			std::cout << alice.getName() << " executed " << robot.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << alice.getName() << " couldn’t execute " << robot.getName()
			<< " because " << e.what() << std::endl;
		}

		try
		{
			robot.execute(charlie);
			std::cout << charlie.getName() << " executed " << robot.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << charlie.getName() << " couldn’t execute " << robot.getName()
			<< " because " << e.what() << std::endl;
		}

		try
		{
			pardon.execute(charlie);
			std::cout << charlie.getName() << " executed " << pardon.getName() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << charlie.getName() << " couldn’t execute " << pardon.getName()
			<< " because " << e.what() << std::endl;
		}

	}
	catch (std::exception &e)
	{
		std::cerr << "Erreur globale : " << e.what() << std::endl;
	}

	return 0;
}
