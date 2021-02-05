#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
private :
	Zombie *Horde;
	int N;
	
public :
	ZombieHorde(int N);
	~ZombieHorde();
	void	announceAll();
};

#endif