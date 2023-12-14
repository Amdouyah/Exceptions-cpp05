#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	private :
		std::string target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &shru);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &shru);
		void execute(const Bureaucrat& executor) const;
		~PresidentialPardonForm();
};

#endif