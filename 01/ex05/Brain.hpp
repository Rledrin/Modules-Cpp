#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>


class Brain
{
private:
	std::string leftSide;
	std::string rightSide;

public:
	Brain();
	~Brain();
	std::string identifier();

};


#endif
