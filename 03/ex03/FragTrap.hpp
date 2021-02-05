#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap;

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap();
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
		void			firstAttack(std::string const & target);
		void			secondAttack(std::string const & target);
		void			thirdAttack(std::string const & target);
};

#endif