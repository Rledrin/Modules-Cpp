#include "AMateria.hpp"

AMateria::AMateria(std::string const &_type) : _type(_type), _xp(0)
{
}

AMateria::AMateria(const AMateria &op) : _type(op._type), _xp(op._xp)
{
}

AMateria::~AMateria()
{
}

AMateria&AMateria::operator=(const AMateria &op)
{
	if (this == &op)
		return (*this); 
	this->_xp = op.getXP();
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}
