#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHightException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

const std::string &Bureaucrat::getName() const
{
	return name;
}

void Bureaucrat::signForm(AForm& form) const
{
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << name << " couldn’t sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHightException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade <= 1)
		throw GradeTooLowException();
	grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", Bureaucrat grade " << b.getGrade();
	return os;
}