#include "Zombie.hpp"

Zombie::Zombie()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);

	/* using nano-seconds instead of seconds */
	srand((time_t)ts.tv_nsec);
	std::string name;
	const std::string wordList[4] = { "Patrick", "John Cena", "Remi", "Ladyslas" };

	name = wordList[rand() % 4];
	std::string type;
	srand((time_t)ts.tv_nsec);
	const std::string typeList[4] = { "default", "mega", "tiny", "big ass" };

	type = typeList[rand() % 4];
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{

}

void	Zombie::advert()
{
	std::cout<< "My name is " << this->name << " and my type is " << this->type << ".\n";
}