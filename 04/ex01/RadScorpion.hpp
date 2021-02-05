#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	virtual ~RadScorpion();
	RadScorpion &operator=(const RadScorpion &);

};


#endif
