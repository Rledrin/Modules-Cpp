#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name, title;
	Sorcerer();

public:
	Sorcerer(std::string const &, std::string const &);
	Sorcerer(const Sorcerer &);
	virtual ~Sorcerer();
	Sorcerer &operator=(const Sorcerer &);

	std::string const &getName();
	std::string const &getTitle();
	void polymorph(Victim const &) const;

};

std::ostream &operator<<(std::ostream &, Sorcerer &);




#endif