#include "ScavTrap.hpp"

typedef void(ScavTrap::* attacks) (std::string const & target);

ScavTrap::ScavTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{ srand(time(NULL)); }

ScavTrap::ScavTrap(std::string name)
:	ClapTrap(
	100,
	100,
	50,
	50,
	1,
	name,
	20,
	15,
	3
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "à été fabriqué !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "à été cassé !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& op)
{
	srand(time(NULL));
	*this = op;
}


void		ScavTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "attaque " << target << " à distance mais differemment, causant " << getRangedAttackDamage() << " points de dégâts !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "attaque " << target << " au corps-à-corps mais differemment, causant " << getMeleeAttackDamage() << " points de dégâts !" << std::endl;
}


void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges_list[] = {
		" 1ere phrase de défi",
		" 2eme phrase de défi",
		" 3eme phrase de défi"
	};
	_print_suffix(getName(), getHitPoints());
	std::cout << target << challenges_list[rand() % 3] << std::endl;
}