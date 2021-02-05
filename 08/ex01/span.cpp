#include "span.hpp"  

Span::Span(unsigned int N) : len(N)
{
}

Span::Span(Span const & copy) : len(copy.len)
{
	cont.clear();
	cont = copy.cont;
}

Span::~Span()
{
	cont.clear();
}

Span &Span::operator=(Span const & op)
{
	len = op.len;
	cont.clear();
	cont = op.cont;
	return *this;
}

void Span::addNumber(int num)
{
	if (cont.size() >= len)
		throw FullSpanException();
	cont.push_back(num);
	std::sort(cont.begin(), cont.end());
}

void Span::addNumber(int start, int end)
{
	if (cont.size() + std::abs(end - start) >= len)
		throw FullSpanException();
	if (start < end)
		for (int i = start; i <= end; i++)
			cont.push_back(i);
	else
		for (int i = end; i <= start; i++)
			cont.push_back(i);
	std::sort(cont.begin(), cont.end());
}

int Span::shortestSpan(void) const
{
	if (cont.size() <= 1)
		throw NotEnoughNumbersException();
	int shortestSp = 2147483647;
	for (int i = (cont.size() - 1); (i - 1) >= 0 ; i--)
		if (shortestSp > std::abs(cont[i] - cont[i - 1]))
			shortestSp = std::abs(cont[i] - cont[i - 1]);
	return shortestSp;
}

int Span::longestSpan(void) const
{
	if (cont.size() <= 1)
		throw NotEnoughNumbersException();
	return (*std::max_element(cont.begin(), cont.end()) - *std::min_element(cont.begin(), cont.end()));
}

const char* Span::FullSpanException::what() const throw()
{
	return "The span is too short to add more number.";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "There is not enough number in the span to find the shortestSpan/longestSpan.";
}
