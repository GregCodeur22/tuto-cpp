#ifndef PRESDENTIALPARDONFORM_HPP
#define PRESDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

 class PresidentialPardonForm : public AForm
 {
	private:
		std::string target;

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		virtual ~PresidentialPardonForm();

		virtual void execute(Bureaucrat const &execute) const;
 };


#endif