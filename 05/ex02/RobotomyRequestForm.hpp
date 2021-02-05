#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm& op);

	void execute(Bureaucrat const &) const;

};

#endif