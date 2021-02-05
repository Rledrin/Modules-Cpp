#include "Pony.hpp"

Pony::Pony(std::string color, std::string name, std::string race, float speed)
{
	this->speed = speed;
	this->color = color;
	this->name = name;
	this->race = race;
	std::cout<< name << " is born, it's a " << race << " and it's " << color << "!\n";
}

Pony::~Pony()
{
	std::cout<< name << " is dead ...\n";
}

void	Pony::run()
{
	std::cout<< name << " is runing at " << speed << "km !\n";
}

void	Pony::eat(std::string food)
{
	std::cout<< name << " is eating " << food << " !\n";
}

void	Pony::set_speed(float speed)
{
	this->speed = speed;
}