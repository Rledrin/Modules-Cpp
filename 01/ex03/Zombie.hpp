#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <time.h>


class Zombie
{
private :
	std::string name;
	std::string type;
	
public :
	Zombie();
	~Zombie();
	void	advert();
};

#endif