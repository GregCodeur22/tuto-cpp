#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
		: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
		if (gradeToSign < 1 || gradeToExecute < 1)
				throw GradeTooHighException();
		if (gradeToSign > 150 || gradeToExecute > 150)
				throw GradeTooLowException();
}

Form::Form(const Form &rhs)
		: name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute) {}

Form &Form::operator=(const Form &rhs)
{
		if (this != &rhs)
				this->isSigned = rhs.isSigned;
		return *this;
}

Form::~Form() {}


const std::string &Form::getName() const { return name; }
bool Form::getIsSigned() const { return isSigned; }
int Form::getGradeToSign() const { return gradeToSign; }
int Form::getGradeToExecute() const { return gradeToExecute; }

void Form::beSigned(const Bureaucrat &b)
{
		if (b.getGrade() > gradeToSign)
				throw GradeTooLowException();
		isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
		os << "Form " << f.getName()
			 << ", signed: " << (f.getIsSigned() ? "yes" : "no")
			 << ", grade to sign: " << f.getGradeToSign()
			 << ", grade to execute: " << f.getGradeToExecute();
		return os;
}
