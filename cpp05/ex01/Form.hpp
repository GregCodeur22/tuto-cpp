#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;

	public:
		class GradeTooHighException : public std::exception
		{
		public:
				const char* what() const throw() { return "Form grade too high"; }
		};

		class GradeTooLowException : public std::exception
		{
		public:
				const char* what() const throw() { return "Form grade too low"; }
		};

		Form();
		Form(const std::string& name, int gradeToSign, int gradeToExecute);
		Form(const Form& rhs);
		Form& operator=(const Form& rhs);
		~Form();

		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif