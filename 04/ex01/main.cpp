#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"


int main()
{
	Character* me = new Character("me");

	std::cout << *me << std::endl;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me << std::endl;
	me->equip(pf);

	me->attack(b);
	std::cout << *me << std::endl;
	me->equip(pr);
	std::cout << *me << std::endl;
	me->attack(b);
	std::cout << *me << std::endl;
	me->attack(b);
	std::cout << *me << std::endl;

	delete me;

	std::cout << "---" << std::endl;

	Character you("you");

	Enemy* s = new SuperMutant();

	you.equip(pr);
	std::cout << you << std::endl;
	you.equip(pf);
	std::cout << you << std::endl;
	you.equip(NULL);
	std::cout << you << std::endl;

	you.attack(s);
	you.equip(pf);
	std::cout << you << std::endl;
	you.attack(s);
	std::cout << you << std::endl;
	you.attack(s);
	std::cout << you << std::endl;
	you.attack(s);
	std::cout << you << std::endl;
	you.attack(s);
	std::cout << you << std::endl;

	Enemy* e = new Enemy(51, "Worm");

	you.attack(e);
	std::cout << you << std::endl;
	you.attack(e);
	std::cout << you << std::endl;

	Character charaFriend(you);
	std::cout << charaFriend << std::endl;
	charaFriend = you;
	std::cout << charaFriend << std::endl;

	SuperMutant m;
	SuperMutant m2(m);
	std::cout << m.getType() << " and " << m2.getType() << std::endl;
	m2 = m;
	std::cout << m.getType() << " and " << m2.getType() << std::endl;

	RadScorpion sc;
	RadScorpion sc2(sc);
	std::cout << sc.getType() << " and " << sc2.getType() << std::endl;
	sc2 = sc;
	std::cout << sc.getType() << " and " << sc2.getType() << std::endl;

	PlasmaRifle pm(*static_cast<PlasmaRifle*>(pr));
	pm = *static_cast<PlasmaRifle*>(pr);
	PowerFist po(*static_cast<PowerFist*>(pf));
	po = *static_cast<PowerFist*>(pf);

	delete e;
	delete pr;
	delete pf;

	return (0);
}