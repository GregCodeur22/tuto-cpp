#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardon", 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardon", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
	: AForm(rhs), target(rhs.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
		if (this != &rhs)
		{
			AForm::operator=(rhs);
			this->target = rhs.target;
		}
		return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::executeAction() const
{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
