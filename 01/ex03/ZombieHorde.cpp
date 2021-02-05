#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->Horde = new Zombie[N];
	this->N = N;
}

ZombieHorde::~ZombieHorde()
{
	delete[] Horde;
}

void	ZombieHorde::announceAll()
{
	for (int i = 0 ; i < this->N ; i++)
	{
		this->Horde[i].advert();
	}
}