#include "Pony.hpp"

void	PonyOnTheStack()
{
	Pony p1("black and white", "Petit Tonerre", "mustang", 88.21f);
	p1.eat("apples");
	p1.run();
	p1.set_speed(24.42f);
	p1.run();
}

void	PonyOnTheHeap()
{
	Pony *p1 = new Pony("brown and white", "Jolly Jumper", "appaloosa", 88.21f);
	p1->eat("carrots");
	p1->run();
	p1->set_speed(24.42f);
	p1->run();
	delete p1;
}

int main()
{
	PonyOnTheStack();
	PonyOnTheHeap();
}