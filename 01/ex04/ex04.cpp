#include <string>
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string &ref = s;
	std::string *ptr = &s;

	std::cout << *ptr << "\n";
	std::cout << ref << "\n";
}