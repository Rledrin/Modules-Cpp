#include "Enemy.hpp"

Enemy::Enemy() : hp(0), type(std::string())
{

}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{

}

Enemy::Enemy(const Enemy &op) : hp(op.hp), type(op.type)
{

}

Enemy::~Enemy()
{

}

Enemy&Enemy::operator=(const Enemy&op)
{
	hp = op.hp;
	type = op.type;
	return (*this);
}

std::string const &Enemy::getType() const
{
	return (type);
}

int Enemy::getHP() const
{
	return (hp);
}

void Enemy::setType(std::string const &type)
{
	this->type = type;
}

void Enemy::setHP(int hp)
{
	this->hp = hp;
}

void Enemy::takeDamage(int dmg)
{
	if (dmg <= 0)
		return ;
	hp -= dmg;
	if (hp < 0)
		hp = 0;
}
