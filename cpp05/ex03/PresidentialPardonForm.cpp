#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &t)
		: AForm("PresidentialPardonForm", 25, 5), target(t) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
		: AForm(rhs), target(rhs.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		target = rhs.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
	if (!getIsSigned())
		throw std::runtime_error("Form is not signed");
	if (execute.getGrade() > getGradeToExecute())
		throw GradeTooLowExecption();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}