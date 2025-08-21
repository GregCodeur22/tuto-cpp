#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;

public:
	class GradeTooHightException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Grade too low!";
		}
	};

	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat() {};

	void signForm(Form &form) const;

	const std::string &getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif