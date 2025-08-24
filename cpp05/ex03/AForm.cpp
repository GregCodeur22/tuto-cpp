#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
		: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeToHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowExecption();
}

AForm::AForm(const AForm &rhs)
		: name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->isSigned = rhs.isSigned;
	return *this;
}

const std::string &AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > gradeToSign)
		throw GradeTooLowExecption();
	isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm " << f.getName()
		 << ", signed: " << (f.getIsSigned() ? "yes" : "no")
		 << ", grade to sign: " << f.getGradeToSign()
		 << ", grade to execute: " << f.getGradeToExecute();
	return os;
}
