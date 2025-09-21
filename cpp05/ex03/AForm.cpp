#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() 
		: name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
		: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
		if (gradeToSign < 1 || gradeToExecute < 1)
				throw GradeTooHighException();
		if (gradeToSign > 150 || gradeToExecute > 150)
				throw GradeTooLowException();
}

AForm::AForm(const AForm &rhs)
		: name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute) {}

		
AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->isSigned = rhs.isSigned;
	return *this;
}

AForm::~AForm() {}
	
const std::string &AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeToSign() const { return gradeToSign; }
int AForm::getGradeToExecute() const { return gradeToExecute; }

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowException();
	executeAction();
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm " << f.getName()
		<< ", signed: " << (f.getIsSigned() ? "yes" : "no")
		<< ", grade to sign: " << f.getGradeToSign()
		<< ", grade to execute: " << f.getGradeToExecute();
	return os;
}
