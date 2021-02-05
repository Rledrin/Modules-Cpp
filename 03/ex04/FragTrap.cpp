#include "FragTrap.hpp"

typedef void(FragTrap::* attacks) (std::string const & target);

FragTrap::FragTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{ srand(time(NULL)); }

FragTrap::FragTrap(std::string name)
:	ClapTrap(
	100,
	100,
	100,
	100,
	1,
	name,
	30,
	20,
	5
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "à été construit !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& op) { *this = op; }

FragTrap::~FragTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "à été detruit !" << std::endl;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "attaque " << target << " à distance, causant " << getRangedAttackDamage() << " points de dégâts !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "attaque " << target << " au corps-à-corps, causant " << getMeleeAttackDamage() << " points de dégâts !" << std::endl;
}


void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	attacks cmd[] = {
		&FragTrap::firstAttack,
		&FragTrap::secondAttack,
		&FragTrap::thirdAttack,
	};
	
	if (getEnergyPoints() < 25)
	{
		_print_suffix(getName(), getHitPoints());
		std::cout << "n'a pas assez d'énergie pour cette attaque." << std::endl;
		return;
	}
	(this->*cmd[rand() % 3])(target);
	setEnergyPoints(getEnergyPoints() - 25);
}

void		FragTrap::firstAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "1er attaque alléatoire sur " << target << std::endl;
}

void		FragTrap::secondAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "2eme attaque alléatoire sur " << target << std::endl;
}

void		FragTrap::thirdAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "3eme attaque alléatoire sur " << target << std::endl;
}
