#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include <list>
# include <vector>
# include <iostream>

template<typename T>
void easyfind(T &cont, int num)
{
	typename T::iterator iter;

	iter = std::find(cont.begin(), cont.end(), num);
	if (iter != cont.end())
		std::cout << "The number: " << num << " has been found." << std::endl;
	else
		std::cerr << "Can't find the number " << num << " in the container." << std::endl;
}

#endif
