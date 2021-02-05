#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			challengeNewcomer(std::string const & target);
};

#endif