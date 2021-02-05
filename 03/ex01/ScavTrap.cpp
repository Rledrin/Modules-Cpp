#include "ScavTrap.hpp"

typedef void(ScavTrap::* attacks) (std::string const & target);

static void _print_suffix(std::string& name, unsigned int hp)
{
	std::cout << "SC4V-TP " << name << "(" << hp << ") : ";
}

ScavTrap::ScavTrap() { srand(time(NULL)); }

ScavTrap::ScavTrap(std::string name)
 :  _hit_points(100),
	_max_hit_points(100),
	_energy_points(100),
	_max_energy_points(100),
	_level(1),
	_name(name),
	_melee_attack_damage(30),
	_ranged_attack_damage(20),
	_armor_damage_reduction(5)
{
	srand(time(NULL));
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "à été fabriqué !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "à été cassé !" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_max_hit_points = op._max_hit_points;
	this->_energy_points = op._energy_points;
	this->_max_energy_points = op._max_energy_points;
	this->_level = op._level;
	this->_name = op._name;
	this->_melee_attack_damage = op._melee_attack_damage;
	this->_ranged_attack_damage = op._ranged_attack_damage;
	this->_armor_damage_reduction = op._armor_damage_reduction;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& op)
{
	srand(time(NULL));
	*this = op;
}


void		ScavTrap::rangedAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "attaque " << target << " à distance mais differemment, causant " << _ranged_attack_damage << " points de dégâts !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "attaque " << target << " au corps-à-corps mais differemment, causant " << _melee_attack_damage << " points de dégâts !" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor_damage_reduction;
	_print_suffix(this->_name, ((int)this->_hit_points - (int)amount >= 0) ? this->_hit_points - amount : 0);
	std::cout << "reçoit " << amount << " points de dégâts !" << std::endl;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	_print_suffix(this->_name, this->_hit_points + amount);
	std::cout << "reçoit " << amount << " points de vie." << std::endl;
	this->_hit_points += amount;
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges_list[] = {
		" 1ere phrase de défi",
		" 2eme phrase de défi",
		" 3eme phrase de défi"
	};
	_print_suffix(this->_name, this->_hit_points);
	std::cout << target << challenges_list[rand() % 3] << std::endl;
}