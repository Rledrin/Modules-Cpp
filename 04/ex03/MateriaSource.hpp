#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int amount;
	AMateria *sources[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const &);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);

};


#endif
