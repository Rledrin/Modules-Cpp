#include "FragTrap.hpp"

typedef void(FragTrap::* attacks) (std::string const & target);

static void _print_suffix(std::string& name, unsigned int hp)
{
	std::cout << "FR4G-TP " << name << "(" << hp << ") : ";
}

FragTrap::FragTrap() { srand(time(NULL)); }

FragTrap::FragTrap(std::string name)
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
	std::cout << "à été construit !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& op) { *this = op; }

FragTrap::~FragTrap()
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "à été detruit !" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap& op)
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

void		FragTrap::rangedAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "attaque " << target << " à distance, causant " << _ranged_attack_damage << " points de dégâts !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "attaque " << target << " au corps-à-corps, causant " << _melee_attack_damage << " points de dégâts !" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	amount -= this->_armor_damage_reduction;
	_print_suffix(this->_name, ((int)this->_hit_points - (int)amount >= 0) ? this->_hit_points - amount : 0);
	std::cout << "subit " << amount << " points de dégâts !" << std::endl;
	if (amount > this->_hit_points)
		amount = this->_hit_points;
	this->_hit_points -= amount;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_points > this->_max_hit_points)
		amount = this->_max_hit_points - this->_hit_points;
	_print_suffix(this->_name, this->_hit_points + amount);
	std::cout << "recupère " << amount << " points de vie." << std::endl;
	this->_hit_points += amount;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	attacks cmd[] = {
		&FragTrap::firstAttack,
		&FragTrap::secondAttack,
		&FragTrap::thirdAttack,
	};
	
	if (this->_energy_points < 25)
	{
		_print_suffix(this->_name, this->_hit_points);
		std::cout << "n'a pas assez d'énergie pour cette attaque." << std::endl;
		return;
	}
	(this->*cmd[rand() % 3])(target);
	this->_energy_points -= 25;
}

void		FragTrap::firstAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "1er attaque alléatoire sur " << target << std::endl;
}

void		FragTrap::secondAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "2eme attaque alléatoire sur " << target << std::endl;
}

void		FragTrap::thirdAttack(std::string const & target)
{
	_print_suffix(this->_name, this->_hit_points);
	std::cout << "3eme attaque alléatoire sur " << target << std::endl;
}
