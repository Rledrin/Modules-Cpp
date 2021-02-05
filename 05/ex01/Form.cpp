#include "Form.hpp"

Form::Form(std::string const &name, int signGrade) : name(name), signGrade(signGrade), sign(false)
{
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) : name(copy.name), signGrade(copy.signGrade), sign(copy.sign)
{
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form &Form::operator=(Form const &op)
{
	sign = op.sign;
	return *this;
}

std::string const &Form::getName() const
{
	return name;
}

bool Form::getSign() const
{
	return sign;
}

int Form::getSignGrade() const
{
	return signGrade;
}

void Form::beSigned(Bureaucrat const &B)
{
	if(B.getGrade() <= signGrade)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form exception: Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form exception: Grade too low.";
}

std::ostream &operator<<(std::ostream &out, const Form &F)
{
	out << F.getName() << " is ";
	if (F.getSign() == false)
		out << "not signed, ";
	else
		out << "signed, ";
	out << "it is signable at grade : " << F.getSignGrade() << "." << std::endl;
	return (out);
}

