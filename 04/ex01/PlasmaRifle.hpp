#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	virtual ~PlasmaRifle();
	PlasmaRifle &operator=(const PlasmaRifle &);

	void attack() const;

};


#endif
