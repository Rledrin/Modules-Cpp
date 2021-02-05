#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon *w1;
	std::string name;
	
public:
	HumanA(std::string name, Weapon &w1);
	~HumanA();
	void	attack();


};


#endif
