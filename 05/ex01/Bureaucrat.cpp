#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
	if (copy.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();

}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

const std::string &Bureaucrat::getName(void) const 
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::upGrade()
{
	if (--grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downGrade()
{
	if (++grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat exception: Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat exception: Grade too low.";
}

void Bureaucrat::signForm(Form &F)
{
	if (F.getSign())
		std::cout << name << " can't sign " << F.getName() << " because: already signed" << std::endl;
	else
	{
		try
		{
			F.beSigned(*this);
			std::cout << name << " signs " << F.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << name << " can't sign " << F.getName() << " because: "
			<< e.what() << std::endl;
		}
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &B)
{
	out << B.getName() << ", bureaucrat grade " << B.getGrade();
	return out;
}
