#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	std::stringstream strStream;
	std::ofstream hpp;
	std::ofstream cpp;
	if (ac == 1)
		return(1);
	for (int i = 1; i < ac; i++)
	{
		strStream.str("");
		strStream << av[i] << ".hpp";
		hpp.open(strStream.str());
		hpp << "#ifndef " << std::uppercase << av[1] << "_HPP" << std::endl;
		hpp << "#define " << std::uppercase << av[1] << "_HPP" << std::endl;
		hpp << "\n\n\nclass " << av[i] << "\n{\nprivate:\n\n\npublic:\n\t"
		<< av[i] << "();\n\t~" << av[i] << "();\n" << "\n\n};\n\n\n#endif\n";
		hpp.close();
		strStream.str("");
		strStream << av[i] << ".cpp";
		cpp.open(strStream.str());
		cpp << "#include \"" << av[i] << ".hpp\"\n\n\n";
		cpp.close();
	}
}