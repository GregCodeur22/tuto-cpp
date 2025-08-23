#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &t)
	: AForm("RobotomyRequestForm", 75, 45), target(t)
{
	std::srand(std::time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
	:AForm(rhs), target(rhs.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        AForm::operator=(rhs);
        target = rhs.target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &execute) const
{
    if (!getIsSigned())
        throw std::runtime_error("Form is not signed");
    if (execute.getGrade() > getGradeToExecute())
        throw GradeTooLowExecption();

    std::cout << "Bzzzz... drilling noises...\n";
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully!\n";
    else
        std::cout << "Robotomy failed on " << target << "...\n";
}