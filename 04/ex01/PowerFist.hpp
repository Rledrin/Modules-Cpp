#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(const PowerFist &);
	virtual ~PowerFist();
	PowerFist &operator=(const PowerFist &);

	void attack() const;

};


#endif
