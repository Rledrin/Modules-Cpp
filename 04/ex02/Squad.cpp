#include "Squad.hpp"

Squad::Squad() : count(0), units(NULL)
{

}

Squad::Squad(const Squad &op) : count(0), units(NULL)
{
	count = 0;
	for (int i = 0; i < op.getCount(); i++)
		push(op.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (!units)
		return;
	for (int i = 0; i < count; i++)
		delete units[i];
	delete[] units;
}

Squad&Squad::operator=(const Squad &op)
{
	if (units)
	{
		for (int i = 0; i < count; i++)
			delete units[i];
		delete[] units;
		units = NULL;
	}
	count = 0;
	for (int i = 0; i < op.getCount(); i++)
		push(op.getUnit(i)->clone());
	return (*this);
}


int Squad::getCount() const
{
	return (count);
}

ISpaceMarine* Squad::getUnit(int i) const
{
	if (this->count == 0 || i < 0 || i >= count)
		return (NULL);
	return (units[i]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (count);
	if (units)
	{
		for (int i = 0; i < count; i++)
			if (units[i] == unit) return (count);
		ISpaceMarine **tmp = new ISpaceMarine*[count + 1];
		for (int i = 0; i < count; i++)
			tmp[i] = units[i];
		delete[] units;
		units = tmp;
		units[count++] = unit;
	}
	else
	{
		units = new ISpaceMarine*[1];
		units[0] = unit;
		count = 1;
	}
	return (count);
}

