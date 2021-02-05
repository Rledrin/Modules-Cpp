#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &s) : name(s.name), title(s.title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &s)
{
	this->name = s.name;
	this->title = s.title;
	return *this;
}

std::string const &Sorcerer::getName()
{
	return (name);
}

std::string const &Sorcerer::getTitle()
{
	return (title);
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and i like ponies!" << std::endl;
	return (out);
}