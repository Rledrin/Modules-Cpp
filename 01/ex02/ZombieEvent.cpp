#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "default";
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

void	ZombieEvent::randomChump()
{
	std::string name;
	srand(time(0));
	const std::string wordList[4] = { "Patrick",
		"John Cena", "Remi", "Ladyslas" };
	name = wordList[rand() % 4];
	
	Zombie(name, this->type);
	// std::cout	<< "A new random Challenger as arrived and his name is " 
	// 			<< name << " ! And he's a type is " << type << ".\n";
}