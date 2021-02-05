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
	bool sign;
	Form();

public:
	Form(std::string const &, int);
	Form(Form const &);
	virtual ~Form();
	Form &operator=(Form const &);

	std::string const &getName() const;
	bool getSign() const;
	int getSignGrade() const;

	void beSigned(Bureaucrat const &);


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