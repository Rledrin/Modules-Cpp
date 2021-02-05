#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout <<"Wrong argument number." << std::endl;
		return (0);
	}
	char a = 65;
	int pos = 0;
	int tmp = 0;
	std::string entireFile;
	std::string nameFile(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ifstream file(av[1]);
	if (!file)
	{
		std::cout << "CANT OPEN\n";
		return (0);
	}
	nameFile = nameFile + ".replace";
	std::ofstream fileToWrite(nameFile.c_str());
	
	while (file.get(a))
	{
		entireFile.push_back(a);
	}
	while (pos < (int)entireFile.length())
	{
		tmp = entireFile.find(s1, pos);
		if (tmp < 0)
			break ;
		entireFile.erase(tmp, s1.length());
		pos = tmp;
		entireFile.insert(pos, s2);
		pos++;
	}
	fileToWrite << entireFile;
}