#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
	std::string name;
	int apcost, damage;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &);
	virtual ~AWeapon();
	AWeapon &operator=(const AWeapon &);

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	void setName(std::string const &);
	void setAPCost(int);
	void setDamage(int);
	virtual void attack() const = 0;

};


#endif
