#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent z1;
	Zombie *z2;
	z1.randomChump();
	z1.setZombieType("mega");
	z2 = z1.newZombie("Alcapone");
	delete z2;
}