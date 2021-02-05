#include "Brain.hpp"


Brain::Brain()
{
	this->leftSide = "rationnal";
	this->rightSide = "emiotional";
}

Brain::~Brain()
{

}

std::string	Brain::identifier()
{
	std::stringstream ss;

	ss << this;

	return (ss.str());
}