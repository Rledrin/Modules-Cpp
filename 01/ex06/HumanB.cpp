#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << name 
		<< " attacks with his " 
		<< w2->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->w2 = &weapon;
}