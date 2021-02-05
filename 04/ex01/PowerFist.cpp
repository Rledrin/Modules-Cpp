#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(const PowerFist &op) : AWeapon(op)
{

}

PowerFist::~PowerFist()
{

}

PowerFist&PowerFist::operator=(const PowerFist&op)
{
	setName(op.getName());
	setAPCost(op.getAPCost());
	setDamage(op.getDamage());
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
