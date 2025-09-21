#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class GradeTooHighException : public std::exception
{
	public:
		const char* what() const throw() { return "Grade too high!"; }
};

class GradeTooLowException : public std::exception
{
	public:
		const char* what() const throw() { return "Grade too low!"; }
};

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		const std::string &getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(AForm &Aform) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif


