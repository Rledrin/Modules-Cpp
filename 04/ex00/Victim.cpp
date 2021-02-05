#include "Victim.hpp"

Victim::Victim(std::string const &name): name(name)
{
	std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &v) : name(v.name)
{
	std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}

Victim &Victim::operator=(const Victim &v)
{
	this->name = v.name;
	return (*this);
}

std::string Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim &v)
{
	o << "I'm " << v.getName() << " and I like otters!" << std::endl;
	return (o);
}

