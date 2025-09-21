#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
		if (grade < 1)
				throw GradeTooHighException();
		if (grade > 150)
				throw GradeTooLowException();
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
		if (this != &other)
				this->grade = other.grade;
		return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string &Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::incrementGrade()
{
		if (grade <= 1)
				throw GradeTooHighException();
		grade--;
}

void Bureaucrat::decrementGrade()
{
		if (grade >= 150)
				throw GradeTooLowException();
		grade++;
}

void Bureaucrat::signForm(Form &form) const
{
		try
		{
				form.beSigned(*this);
				std::cout << name << " signed " << form.getName() << std::endl;
		}
		catch (std::exception &e)
		{
				std::cout << name << " couldn’t sign " << form.getName()
									<< " because " << e.what() << std::endl;
		}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
		os << b.getName() << ", Bureaucrat grade " << b.getGrade();
		return os;
}
