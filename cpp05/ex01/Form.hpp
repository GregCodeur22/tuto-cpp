#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;

	public:
		class GradeToHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return "Form grade too high";
				}
		};

		class GradeTooLowExecption : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form grade too low";
				}
		};

		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &rhs);
		~Form();
		Form &operator=(const Form &rhs);

		const std::string &getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat &b);
};

#endif