#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	int hp;
	std::string type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &);
	virtual ~Enemy();
	Enemy &operator=(const Enemy &);

	std::string const &getType() const;
	int getHP() const;
	void setType(std::string const &);
	void setHP(int);

	virtual void takeDamage(int);

};


#endif
