#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137, target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	if (this == &op)
		return (*this); 
	Form::operator=(op);
	return (*this);
}

const char *ShrubberyCreationForm::WriteException::what() const throw()
{
	return "Exception file: Can't open the file.";
}

void ShrubberyCreationForm::execute(Bureaucrat const &B) const
{
	Form::execute(B);
	std::ofstream file;

	file.open(std::string(getTarget() + "_shrubbery").c_str(), std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "                 # #### ####			" << std::endl;
		file << "               ### \\/#|### |/####		" << std::endl;
		file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
		file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
		file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
		file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
		file << "          __#_--###`  |{,###---###-~	" << std::endl;
		file << "                    \\ }{				" << std::endl;
		file << "                     }}{				" << std::endl;
		file << "                     }}{				" << std::endl;
		file << "                     {{}				" << std::endl;
		file << "               , -=-~{ .-^- _			" << std::endl;
		file << "                     `}				" << std::endl;
		file << "                      {				" << std::endl;
		file.close();
	}
	else throw WriteException();
}
