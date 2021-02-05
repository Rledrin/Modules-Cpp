#ifndef Weapon_HPP
#define Weapon_HPP

#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string w);
	~Weapon();
	std::string& getType();
	void	setType(std::string type);

};


#endif
