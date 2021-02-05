#include "Peon.hpp"
#include "Sorcerer.hpp"

int main ()
{
	Peon p("p");
	Sorcerer s("s","title");
	Victim v("v");

	std::cout << p << s << v;

	s.polymorph(p);
	p.getPolymorphed();
	s.polymorph(v);
	v.getPolymorphed();

	return (0);
}
