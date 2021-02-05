#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form
{
private:
	std::string const name;
	int const signGrade;
	int const execGrade;
	bool sign;
	std::string const target;
	Form();

public:
	Form(std::string const &, int, int);
	Form(std::string const &, int, int, std::string const &);
	Form(Form const &);
	virtual ~Form();
	Form &operator=(Form const &);

	std::string const &getName() const;
	std::string const &getTarget() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(Bureaucrat const &);
	virtual void execute(Bureaucrat const &) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &, Form const &);

#endif