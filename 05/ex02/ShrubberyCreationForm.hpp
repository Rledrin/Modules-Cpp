#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>

# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& op);

	void execute(Bureaucrat const &) const;

	class WriteException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif