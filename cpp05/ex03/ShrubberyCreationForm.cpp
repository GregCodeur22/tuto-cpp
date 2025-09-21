#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
		: AForm("ShrubberyCreation", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		: AForm("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
		: AForm(rhs), target(rhs.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		this->target = rhs.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream file((target + "_shrubbery").c_str());
	if (file.is_open()) {
			file << "       _-_" << std::endl;
			file << "    /~~   ~~\\" << std::endl;
			file << " /~~         ~~\\" << std::endl;
			file << "{               }" << std::endl;
			file << " \\  _-     -_  /" << std::endl;
			file << "   ~  \\\\ //  ~" << std::endl;
			file << "_- -   | | _- _" << std::endl;
			file << "  _ -  | |   -_" << std::endl;
			file << "      // \\\\" << std::endl;
	}
}
