#include "Form.hpp"

Form::Form(std::string const &name, int signGrade, int execGrad) : name(name), signGrade(signGrade), execGrade(execGrad), sign(false)
{
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(std::string const &name, int signGrade, int execGrad, std::string const &target) : name(name), signGrade(signGrade), execGrade(execGrad), sign(false), target(target)
{
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) : name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade), sign(copy.sign), target(copy.target)
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

std::string const &Form::getTarget() const
{
	return target;
}

bool Form::getSign() const
{
	return sign;
}

int Form::getSignGrade() const
{
	return signGrade;
}

int Form::getExecGrade() const
{
	return execGrade;
}

void Form::beSigned(Bureaucrat const &B)
{
	if(B.getGrade() <= signGrade)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const &B) const
{
	if (B.getGrade() > execGrade)
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
	out << "it is signable at grade : " << F.getSignGrade() << ", it can be executed at grade : " 
	<< F.getExecGrade() << "." << std::endl;
	return (out);
}

