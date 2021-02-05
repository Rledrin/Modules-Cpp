#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): w1(&weapon), name(name)
{}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << name 
		<< " attacks with his " 
		<< w1->getType() << "\n";
}
