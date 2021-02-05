#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *b1 = new Bureaucrat("Bureau1", 2);
	Bureaucrat *b2 = new Bureaucrat("Bureau2", 149);

	try
	{
		std::cout << *b1 << std::endl;
		b1->upGrade();
		std::cout << *b1 << std::endl;
		b1->upGrade();
		std::cerr << "[+][1] Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "[1] Exception : " << e.what() << std::endl;
	}

	try
	{
		std::cout << *b2 << std::endl;
		b2->downGrade();
		std::cout << *b2 << std::endl;
		b2->downGrade();
		std::cerr << "[+][2] Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "[2] Exception : " << e.what() << std::endl;
	}

	Bureaucrat *toHigh;
	Bureaucrat *toLow;

	try
	{
		toHigh = new Bureaucrat("ToHigh", -10);
		std::cerr << "[+][3] Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "[3] Exception : " << e.what() << std::endl;
	}

	try
	{
		toLow = new Bureaucrat("ToLow", 420);
		std::cerr << "[+][4] Exception does'nt work nicely. " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "[4] Exception : " << e.what() << std::endl;
	}
	delete b1;
	delete b2;
}