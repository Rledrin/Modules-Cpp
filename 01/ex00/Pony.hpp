#ifndef PONY_HPP

#include <iostream>
#include <string>

class Pony 
{
private :
	std::string color;
	float speed;
	std::string name;
	std::string race;

public :
	Pony(std::string color, std::string name, std::string race, float speed);
	~Pony();
	void	run();
	void	eat(std::string food);
	void	set_speed(float speed);
};

#endif