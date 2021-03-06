#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
private:
	std::string const name;
	int grade;
	Bureaucrat();

public:
	Bureaucrat(std::string const &, int grade);
	Bureaucrat(Bureaucrat const &);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &);

	std::string const &getName() const;
	int getGrade() const;
	void upGrade();
	void downGrade();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void signForm(Form &);

};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif