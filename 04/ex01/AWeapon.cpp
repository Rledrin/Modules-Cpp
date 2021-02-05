#include "AWeapon.hpp"

AWeapon::AWeapon() : name(std::string()), apcost(0), damage(0)
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: name(name), apcost(apcost), damage(damage)
{

}

AWeapon::AWeapon(const AWeapon &op)
: name(op.name), apcost(op.apcost), damage(op.damage)
{

}

AWeapon::~AWeapon()
{

}

AWeapon&AWeapon::operator=(const AWeapon &op)
{
	this->name = op.name;
	this->apcost = op.apcost;
	this->damage = op.damage;
	return (*this);
}

std::string const &AWeapon::getName() const
{
	return (name);
}

int AWeapon::getAPCost() const
{
	return (apcost);
}

int AWeapon::getDamage() const
{
	return (damage);
}

void AWeapon::setName(std::string const &name)
{
	this->name = name;
}

void AWeapon::setAPCost(int apcost)
{
	this->apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
	this->damage = damage;
}
