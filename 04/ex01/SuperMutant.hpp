#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	virtual ~SuperMutant();
	SuperMutant &operator=(const SuperMutant &);

	void takeDamage(int dmg);

};


#endif
