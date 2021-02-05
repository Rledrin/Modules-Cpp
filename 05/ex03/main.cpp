# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	// rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	rrf->execute(Bureaucrat("aa", 1));

	delete rrf;

	return (0);
}