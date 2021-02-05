#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(25);
	v.push_back(7);
	v.push_back(0);
	v.push_back(4);
	v.push_back(99);

	try
	{
		easyfind< std::vector<int> >(v, 4);
		easyfind< std::vector<int> >(v, 11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
