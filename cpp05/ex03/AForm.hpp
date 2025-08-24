#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class AForm
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
					return "AForm grade too high";
				}
		};

		class GradeTooLowExecption : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "AForm grade too low";
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form not signed";
				}
		};

		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &rhs);
		virtual ~AForm();
		AForm &operator=(const AForm &rhs);

		const std::string &getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const &execute) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);


#endif