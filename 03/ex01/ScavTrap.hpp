#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

class ScavTrap;

class ScavTrap
{
	private:
		unsigned int	_hit_points;
		unsigned int	_max_hit_points;
		unsigned int	_energy_points;
		unsigned int	_max_energy_points;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_attack_damage;
		unsigned int	_ranged_attack_damage;
		unsigned int	_armor_damage_reduction;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
};

#endif