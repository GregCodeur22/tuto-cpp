#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
		std::srand(std::time(0));

		Intern someRandomIntern;
		Bureaucrat bob("Bob", 140);       // Pour Shrubbery
		Bureaucrat alice("Alice", 40);    // Pour Robotomy
		Bureaucrat charlie("Charlie", 1); // Pour Presidential

		//AForm test("TestForm", 50, 50);

		AForm* shrub = someRandomIntern.makeForm("shrubbery creation", "home");
		AForm* robot = someRandomIntern.makeForm("robotomy request", "Marvin");
		AForm* pardon = someRandomIntern.makeForm("presidential pardon", "Ford");
		//AForm* unknown = someRandomIntern.makeForm("unknown form", "Nobody"); // Test erreur

		std::cout << "\n--- Tentatives de signature ------------------------------------\n";

		if (shrub)
				bob.signForm(*shrub);

		if (robot)
				alice.signForm(*robot);

		if (pardon)
				charlie.signForm(*pardon);

		std::cout << "\n--- Tentatives d'exécution -----------------------------------------\n";
		
		// Tentatives d'exécution pour Shrubbery
		try
		{
			if (shrub)
				shrub->execute(bob);
		}
		catch (std::exception &e)
		{
			if (shrub)
				std::cout << bob.getName() << " couldn’t execute "
				<< shrub->getName() << " because " << e.what() << std::endl;
		}

		try
		{
			if (shrub)
				shrub->execute(charlie);
			std::cout << charlie.getName() << " executed " << shrub->getName() << std::endl;
		}
		catch (std::exception &e)
		{
			if (shrub)
				std::cout << charlie.getName() << " couldn’t execute "
				<< shrub->getName() << " because " << e.what() << std::endl;
		}

		// Tentatives d'exécution pour Robotomy
		try
		{
			if (robot)
				robot->execute(alice);
			std::cout << alice.getName() << " executed " << robot->getName() << std::endl;
		}
		catch (std::exception &e)
		{
			if (robot)
				std::cout << alice.getName() << " couldn’t execute "
				<< robot->getName() << " because " << e.what() << std::endl;
		}

		try
		{
			if (robot)
				robot->execute(charlie);
			std::cout << charlie.getName() << " executed " << robot->getName() << std::endl;
		}
		catch (std::exception &e)
		{
			if (robot)
				std::cout << charlie.getName() << " couldn’t execute "
				<< robot->getName() << " because " << e.what() << std::endl;
		}

		// Tentatives d'exécution pour Presidential
		try
		{
			if (pardon)
				pardon->execute(charlie);
			std::cout << charlie.getName() << " executed " << pardon->getName() << std::endl;
		}
		catch (std::exception &e)
		{
			if (pardon)
				std::cout << charlie.getName() << " couldn’t execute "
				<< pardon->getName() << " because " << e.what() << std::endl;
		}

		delete shrub;
		delete robot;
		delete pardon;

		return 0;
}
