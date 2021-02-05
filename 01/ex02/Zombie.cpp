#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	advert();
}

Zombie::~Zombie()
{

}

void	Zombie::advert()
{
	std::cout<< "My name is " << this->name << " and my type is " << this->type << ".\n";
}