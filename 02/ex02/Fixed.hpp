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
	Fixed operator+(const Fixed& op) const;
	Fixed operator-(const Fixed& op) const;
	Fixed operator*(const Fixed& op) const;
	Fixed operator/(const Fixed& op) const;
	Fixed & operator++(void);					//pre increment
	Fixed operator++(int);						//post increment
	Fixed & operator--(void);					//pre decrement
	Fixed operator--(int);						//post decrement
	bool operator>(Fixed const & op) const;
	bool operator<(Fixed const & op) const;
	bool operator>=(Fixed const & op) const;
	bool operator<=(Fixed const & op) const;
	bool operator==(Fixed const & op) const;
	bool operator!=(Fixed const & op) const;
	static Fixed &min(Fixed &u, Fixed &v);
	const static Fixed &min(const Fixed &u, const Fixed &v);
	static Fixed &max(Fixed &u, Fixed &v);
	const static Fixed &max(const Fixed &u, const Fixed &v);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif
