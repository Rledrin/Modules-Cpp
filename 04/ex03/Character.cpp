#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

Character::Character(const Character& op)
{
	_name = std::string(op.getName());
	for (int i = 0; i < 4; i++)
		if (_inv[i])
			delete _inv[i];
	for (int i = 0; i < 4; i++)
		if (op._inv[i])
			_inv[i] = op._inv[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inv[i])
		{
			delete _inv[i];
			_inv[i] = NULL;
		}
	}
}

Character &Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	_name = op.getName();

	for (int i = 0; i < 4; i++)
		if (op._inv[i])
			_inv[i] = op._inv[i];
		else
			_inv[i] = NULL;
	
	return (*this);
}

std::string const &	Character::getName(void) const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && _inv[i] != NULL; i++)
		;
	if (i < 4)
		_inv[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		_inv[idx]->use(target);
}
