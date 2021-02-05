#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(std::string const &);
	Peon(const Peon &);
	virtual ~Peon();
	Peon &operator=(const Peon &);

	void getPolymorphed() const;

};





#endif