#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int val;
	static const int bits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed &operator=(const Fixed &other);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif
