#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	Character();
	std::string name;
	int ap;
	AWeapon *Weapon;

public:
	Character(std::string const & name);
	Character(const Character &);
	virtual ~Character();
	Character &operator=(const Character &);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const &getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;

};

std::ostream &operator<<(std::ostream &, Character const &);

#endif
