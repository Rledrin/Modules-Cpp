#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
private:
	Victim();
	std::string name;

public:
	Victim(std::string const &);
	Victim(const Victim &);
	virtual ~Victim();
	Victim &operator=(const Victim &);

	std::string getName() const;
	virtual void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &, Victim &);



#endif