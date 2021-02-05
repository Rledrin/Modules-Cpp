#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &op) : AWeapon(op)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle&PlasmaRifle::operator=(const PlasmaRifle&op)
{
	setName(op.getName());
	setAPCost(op.getAPCost());
	setDamage(op.getDamage());
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
