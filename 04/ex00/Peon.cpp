#include "Peon.hpp"

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &p) : Victim(p)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &op)
{
	if (this == &op)
		return (*this);
	Victim::operator=(op);
	return (*this);
}

void Peon::getPolymorphed() const
{

	std::cout << Victim::getName() << " was just polymorphed into a pink pony!" << std::endl;
}

