#ifndef PESIDENTIALPARDONFORM_HPP
# define PESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm& op);

	void execute(Bureaucrat const &) const;

};

#endif