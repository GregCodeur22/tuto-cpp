#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}
Intern::~Intern() {}

// Fonctions "factory" déclarées en static ou dans un namespace anonyme
static AForm *createShrubbery(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

static AForm *createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

static AForm *createPresidential(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string forms[] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"};

	AForm *(*creators[])(const std::string &) = {
			createShrubbery,
			createRobotomy,
			createPresidential};

	for (int i = 0; i < 3; ++i)
	{
		if (forms[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return creators[i](target);
		}
	}

	std::cerr << "Intern couldn't find the form: " << formName << std::endl;
	return NULL;
}
