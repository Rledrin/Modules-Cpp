#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}


int main()
{
	A a;
	B b;
	C c;

	std::cout << "Pointers :" << std::endl;
	identify_from_pointer(&b);
	identify_from_pointer(&a);
	identify_from_pointer(&c);

	std::cout << "\nReferences :" << std::endl;
	identify_from_reference(c);
	identify_from_reference(b);
	identify_from_reference(a);

	return 0;
}
