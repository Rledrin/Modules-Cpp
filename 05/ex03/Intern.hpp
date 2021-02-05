#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern const &);
	virtual ~Intern();
	Intern &operator=(Intern const &);

	Form *makeForm(std::string const &, std::string const &) const;
};


#endif