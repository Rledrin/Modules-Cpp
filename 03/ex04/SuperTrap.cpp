#include "SuperTrap.hpp"

SuperTrap::SuperTrap() 
:
    ClapTrap(), FragTrap(), NinjaTrap()
{}

SuperTrap::SuperTrap(std::string name)
:
    ClapTrap(
        100,
        10,
        120,
        120,
        1,
        name,
        60,
        30,
        5
    ),
    FragTrap(
        name
    ),
    NinjaTrap(
        name
    )
{
    std::cout << "Super Trap created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& op) { *this = op; }
SuperTrap::~SuperTrap() {}
SuperTrap & SuperTrap::operator=(const SuperTrap& op)
{
    if (this == &op)
        return (*this); 
    return (*this);
}

void		SuperTrap::rangedAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "J'urine des arcs-en-ciel sur toi " << target << ", " << getRangedAttackDamage() << " de ta décadante vie en moins dans ta face !" << std::endl;
}

void		SuperTrap::meleeAttack(std::string const & target)
{
	_print_suffix(getName(), getHitPoints());
	std::cout << "Ninja ! Ninja ! NIIIIIIINJA, coup direct sur " << target <<". Direct in the carotine pour un total de " << getMeleeAttackDamage() << " dégats ! " << std::endl;
}