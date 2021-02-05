#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "default";
}

Weapon::Weapon(std::string w)
{
	type = w;
}

Weapon::~Weapon()
{

}

std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
