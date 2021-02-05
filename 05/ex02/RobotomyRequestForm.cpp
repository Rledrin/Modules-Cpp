#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", 72, 45, target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	Form::operator=(op);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &B) const
{
	Form::execute(B);
	std::cout << "*bzzzt* *bzzzt*" << std::endl;;
	if ((rand() % 100) > 50)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << getTarget() << " robotomization is a failure." << std::endl;
}