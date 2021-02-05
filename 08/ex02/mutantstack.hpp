#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stack>
#include <deque>


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T, Container>() {};
	MutantStack(MutantStack const &copy) : std::stack<T, Container>(copy) {};
	virtual ~MutantStack() {};
	MutantStack &operator=(MutantStack const &op)
	{
		if (this == &op)
			return (*this);
		std::stack<T, Container>::operator=(op);
		return (*this);
	};


	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return std::stack<T, Container>::c.begin(); }
	iterator end() { return std::stack<T, Container>::c.end(); }

	const_iterator begin() const { return (std::stack<T, Container>::c.begin()); }
	const_iterator end() const { return std::stack<T, Container>::c.end(); }

	reverse_iterator rbegin() { return std::stack<T, Container>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T, Container>::c.rend(); }

	const_reverse_iterator rbegin() const { return std::stack<T, Container>::c.rbegin(); }
	const_reverse_iterator rend() const { return std::stack<T, Container>::c.rend(); }

};



#endif
