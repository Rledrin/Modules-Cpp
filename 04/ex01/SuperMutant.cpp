#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &op) : Enemy(op)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant&SuperMutant::operator=(const SuperMutant&op)
{
	setHP(op.getHP());
	setType(op.getType());
	return (*this);
}

void SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	if (dmg <= 0)
		return ;
	setHP(getHP() - dmg);
	if (getHP() < 0)
		setHP(0);
}
