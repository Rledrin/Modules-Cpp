#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : amount(0)
{
	for (int i = 0; i < 4; i++)
		sources[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &op) : amount(0)
{
	for (int i = 0; i < op.amount; i++)
		learnMateria(op.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		sources[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < amount; i++)
		delete sources[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &op)
{
	for (int i = 0; i < amount; i++)
		delete sources[i];
	amount = 0;
	for (int i = 0; i < op.amount; i++)
		learnMateria(op.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		sources[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (amount  == 4 || m == NULL)
		return ;
	for (int i = 0; i < amount; i++)
		if (sources[i] == m)
			return ;
	sources[amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < amount; i++)
		if (sources[i]->getType() == type)
			return (sources[i]->clone());
	return (NULL);
}