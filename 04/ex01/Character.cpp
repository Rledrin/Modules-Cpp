#include "Character.hpp"

Character::Character(std::string const & name) : name(name), ap(40), Weapon(0)
{

}

Character::Character(const Character &op) : name(op.name), ap(op.ap), Weapon(op.Weapon)
{

}

Character::~Character()
{

}

Character &Character::operator=(const Character&op)
{
	name = op.name;
	ap = op.ap;
	Weapon = op.Weapon;
	return (*this);
}

void Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void Character::equip(AWeapon *Weapon)
{
	this->Weapon = Weapon;
}

void Character::attack(Enemy *Enemy)
{
	if (!Weapon || ap < Weapon->getAPCost())
		return ;
	ap -= Weapon->getAPCost();
	std::cout << name << " attaque " << Enemy->getType() << " with a " 
	<< Weapon->getName() << std::endl;
	Enemy->takeDamage(Weapon->getDamage());
	Weapon->attack();
	if (Enemy->getHP() == 0)
		delete Enemy;
}

std::string const &Character::getName() const
{
	return (name);
}

int Character::getAp() const
{
	return (ap);
}

AWeapon *Character::getWeapon() const
{
	return (Weapon);
}

std::ostream &operator<<(std::ostream &o, Character const &c)
{
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAp() << " AP and carries a " << c.getWeapon()->getName();
	else
		o << c.getName() << " has " << c.getAp() << " AP and is unarmed";
	return (o);
}
