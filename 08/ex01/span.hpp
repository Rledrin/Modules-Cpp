#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <exception>
#include <cmath>
#include <algorithm>

class Span
{
private:
	unsigned int len;
	std::vector<int> cont;
	Span();

public:
	Span(unsigned int N);
	Span(Span const & copy);
	virtual ~Span();
	Span &operator=(Span const & op);

	void addNumber(int);
	void addNumber(int, int);

	int shortestSpan(void) const;
	int longestSpan(void) const;


	class FullSpanException: public std::exception {
		virtual const char* what() const throw();
	};
	class NotEnoughNumbersException: public std::exception {
		virtual const char* what() const throw();
	};

};

#endif
