#include "Array.hpp"


int main()
{
	Array<int> j(5);
	Array<std::string> list(2);

	list[0] = "test";
	list[1] = "plop";

	std::cout << "String array content : " << std::endl;
	for (unsigned int i = 0; i < list.size(); i++)
		std::cout << "list[" << i << "] = " << list[i] << std::endl;

	std::cout << std::endl;
	std::cout << "Copy list :" << std::endl;
	Array<std::string> listcopy(list);
	std::cout << "Change list[0] to \"aaaa\"" << std::endl;
	list[0] = "aaaa";
	std::cout << "Listcopy[0] = " << listcopy[0] << std::endl;
	std::cout << "List[0] = " << list[0] << std::endl;

	std::cout << std::endl;
	std::cout << "Int array content : " << std::endl;
	for (unsigned int i = 0; i < j.size(); i++)
		std::cout << "j" << i << " = " << j[i] << std::endl;

	std::cout << std::endl;
	Array<int> intassign = j;
	std::cout << "Int array content : " << std::endl;
	for (unsigned int i = 0; i < j.size(); i++)
		std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

	std::cout << std::endl;
	std::cout << "See out of the bound : " << std::endl;
	try
	{
		std::cout << "j.size() + 1 = " << j[j.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<"\nExeption : " << e.what() << '\n';
	}
	return 0;
}
