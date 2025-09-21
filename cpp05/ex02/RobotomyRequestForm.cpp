#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequest", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequest", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
	: AForm(rhs), target(rhs.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
		if (this != &rhs)
		{
			AForm::operator=(rhs);
			this->target = rhs.target;
		}
		return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeAction() const
{
	std::cout << "BZZZZZZZZZZ... drilling noises...\n";
	std::srand(std::time(NULL));
	if (std::rand() % 2)
			std::cout << target << " has been robotomized successfully" << std::endl;
	else
			std::cout << "Robotomy failed on " << target << std::endl;
}
