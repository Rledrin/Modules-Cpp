#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

class FragTrap;

class FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		~FragTrap();
		FragTrap &operator=(const FragTrap& op);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
		void			firstAttack(std::string const & target);
		void			secondAttack(std::string const & target);
		void			thirdAttack(std::string const & target);
};

#endif