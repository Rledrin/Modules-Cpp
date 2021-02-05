#include "Human.hpp"

Human::Human()
{
	this->brain = new Brain();
}

Human::~Human()
{
	delete brain;
}

std::string	Human::identifier()
{
	return (this->brain->identifier());
}

Brain&		Human::getBrain()
{
	return (*brain);
}