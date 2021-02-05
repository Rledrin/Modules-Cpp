#include "Intern.hpp"

static Form*	createPresidentialPardonForm(std::string const & target);
static Form*	createRobotomyRequestForm(std::string const & target);
static Form*	createShrubberyCreationForm(std::string const & target);

Intern::Intern() {}

Intern::Intern(const Intern& copy) { (void)copy; }

Intern::~Intern() {}

Intern & Intern::operator=(const Intern& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}

Form *Intern::makeForm(std::string const &type, std::string const &target) const
{
	Form* rtn;
	typedef Form* (*func)(std::string const &target);
	typedef struct { std::string type; func f; } FormTypes;

	rtn = NULL;
	FormTypes	forms[] = 
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].type == type)
		{
			rtn = forms[i].f(target);
			std::cout << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
	}
	std::cout << "Form name not found." << std::endl;
	return (rtn);
}

static Form*	createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

static Form*	createRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

static Form*	createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

