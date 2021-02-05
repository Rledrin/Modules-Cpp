#include "NinjaTrap.hpp"

typedef void(NinjaTrap::* attacks) (std::string const & target);

NinjaTrap::NinjaTrap()
:	ClapTrap(0,0,0,0,0,"",0,0,0)
{ srand(time(NULL)); }

NinjaTrap::NinjaTrap(std::string name)
:	ClapTrap(
	60,
	60,
	120,
	120,
	1,
	name,
	60,
	5,
	0
	)
{
	srand(time(NULL));
	_print_suffix(getName(), getHitPoints());
	std::cout << "Un NinjaTrap à été crée." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& op)
{
	srand(time(NULL));
	*this = op;
}

NinjaTrap::~NinjaTrap()
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Un NinjaTrap est mort." << std::endl;	
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap& op)
{
	if (this == &op)
		return (*this);
	ClapTrap::operator=(op);
	return (*this);
}

void		NinjaTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "utilise une attaque à distance sur " << target << ", ça lui inflige " << getRangedAttackDamage() << " dégats !" << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "utilise une attaque au corps-à-corps sur " << target <<", ça lui inflige " << getMeleeAttackDamage() << " dégats !" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap & claptrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Attaque special no0 sur " << claptrap.getName() << ", un ClapTrap." << std::endl;

}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Attaque special no1 sur " << ninjatrap.getName() << ", un NinjaTrap." << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap & fragtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Attaque special no2 sur " << fragtrap.getName() << ", un FragTrap." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & scavtrap)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Attaque special no3 sur " << scavtrap.getName() << ", un ScavTrap." << std::endl;
}