#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;

public:
		class GradeTooHighException : public std::exception {
		public:
				const char* what() const throw() { return "AForm grade too high"; }
		};

		class GradeTooLowException : public std::exception {
		public:
				const char* what() const throw() { return "AForm grade too low"; }
		};

		class FormNotSignedException : public std::exception {
		public:
				const char* what() const throw() { return "Form not signed"; }
		};

		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &rhs);
		AForm &operator=(const AForm &rhs);
		virtual ~AForm();

		const std::string &getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(const Bureaucrat &b);
		void execute(Bureaucrat const &executor) const;

protected:
		virtual void executeAction() const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
