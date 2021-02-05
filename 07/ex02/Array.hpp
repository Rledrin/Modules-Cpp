#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>


template<typename T>
class Array
{
private:
	T *array;
	unsigned int len;

public:
	Array() : array(new T[0]), len(0) {}
	Array(unsigned int n) : array(new T[n]), len(n) {}

	Array(const Array& copy)
	{
		this->array = new T[copy.len];
		this->len = copy.len;
		for (unsigned i = 0; i < this->len; i++)
			this->array[i] = copy.array[i];
	}

	virtual ~Array() { delete [] array; }

	Array &operator=(const Array& op)
	{
		if (this == op)
			return (this);
		this->array = new T[op.len];
		this->len = op.len;
		for (int i = 0; i < this->len; i++)
			this->array[i] = op.array[i];
		return (this);
	}

	T &operator[](unsigned int i)
	{
		if (i >= len)
			throw indexArray();
		return array[i];
	}

	unsigned int size() const { return len; }

	class indexArray : public std::exception
	{
	public:
		virtual const char *what() const throw() { return ("The index is out of the array range."); }
	};

};

#endif
