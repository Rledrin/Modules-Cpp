#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	Form::operator=(op);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &B) const
{
	Form::execute(B);
	std::cout << getTarget() << " has been forgiven by Zafod Beeblebrox." << std::endl;;
}