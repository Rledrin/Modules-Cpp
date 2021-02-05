#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine **units;

public:
	Squad();
	Squad(const Squad &);
	virtual ~Squad();
	Squad &operator=(const Squad &);

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine *unit);



};


#endif
