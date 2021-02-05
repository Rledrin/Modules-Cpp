#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class Fixed
{
private:
	int val;
	static const int bits = 8;

public:
	Fixed();
	Fixed(Fixed &other);
	~Fixed();
	Fixed &operator=(Fixed &other);
	int getRawBits() const;
	void setRawBits(int const raw);

};

#endif
