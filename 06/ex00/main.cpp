#include "conv.hpp"

int main(int ac, char**av)
{
	if (ac == 2)
	{
		conv c;
		float toConv;
		
		try
		{
			toConv = c.isConv(av[1]);
		}
		catch (std::exception & e)
		{
			std::cout << "Error : " << e.what() << std::endl;
			return (1);
		}
		try
		{
			char ch = c.toChar(toConv);
			std::cout << "char : '" << ch << "'" << std::endl;
		}
		catch (std::string & e) { std::cout << "char : " << e << std::endl; }

		try
		{
			std::cout << "int : " << c.toInt(toConv) << std::endl;
		}
		catch (std::string & e) { std::cout << e << std::endl; }

		float f = c.toFloat(toConv);
		if (f - (int)f != (float)0)
			std::cout << "float : " << c.toFloat(toConv) << "f" << std::endl;
		else
			std::cout << "float : " << c.toFloat(toConv) << ".0f" << std::endl;

		double d = c.toDouble(toConv);
		if (d - (int)d != (double)0)
			std::cout << "double : " << c.toDouble(toConv) << std::endl;
		else
			std::cout << "double : " << c.toFloat(toConv) << ".0" << std::endl;
	}
	else
		std::cout << "Wrong number of argument." << std::endl;
	return 0;
}
