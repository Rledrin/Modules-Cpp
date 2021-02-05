#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->val = value << this->bits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->val = (int)(roundf(value * (1 << this->bits)));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->val = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed & op) const
{
	Fixed rtn;
	rtn.setRawBits(this->val + op.getRawBits());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed & op) const
{
	Fixed rtn;
	rtn.setRawBits(this->val - op.getRawBits());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed & op) const
{
	Fixed rtn;
	rtn.setRawBits((this->val * op.getRawBits()) >> this->bits);
	return (rtn);
}

Fixed Fixed::operator/(const Fixed & op) const
{
	Fixed rtn;
	rtn.setRawBits((this->val << this->bits) / op.getRawBits());
	return (rtn);
}

// Pre increment
Fixed & Fixed::operator++(void)
{
	float tmp = toFloat();
	tmp++;
	this->val = (int)(roundf(tmp * (1 << this->bits)));
	// this->val++;
	return (*this);
}

// Post increment
Fixed Fixed::operator++(int)
{
	Fixed rtn(*this);
	operator++();
	return (rtn);
}

// Pre decrement
Fixed &Fixed::operator--(void)
{
	float tmp = toFloat();
	tmp--;
	this->val = (int)(roundf(tmp * (1 << this->bits)));
	// this->val--;
	return (*this);
}

// Post decrement
Fixed Fixed::operator--(int)
{
	Fixed rtn(*this);
	operator--();
	return (rtn);
}

static bool isEqual(Fixed const & op1, Fixed const & op2)
{
	return (op1.getRawBits() == op2.getRawBits());
}

bool Fixed::operator>(Fixed const & op) const
{
	return (this->val > op.getRawBits());
}

bool Fixed::operator<(Fixed const & op) const
{
	return (this->val < op.getRawBits());
}
bool Fixed::operator>=(Fixed const & op) const
{
	return (this->val >= op.getRawBits());
}

bool Fixed::operator<=(Fixed const & op) const
{
	return (this->val <= op.getRawBits());
}

bool Fixed::operator==(Fixed const & op) const
{
	return (isEqual(*this, op));
}

bool Fixed::operator!=(Fixed const & op) const
{
	return !(isEqual(*this, op));
}

Fixed & Fixed::min(Fixed &u, Fixed &v)
{
	return (u < v ? u : v);
}

const Fixed & Fixed::min(const Fixed &u, const Fixed &v)
{
	return (u < v ? u : v);
}

Fixed & Fixed::max(Fixed &u, Fixed &v)
{
	return (u > v ? u : v);
}

const Fixed & Fixed::max(const Fixed &u, const Fixed &v)
{
	return (u > v ? u : v);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->val / (float)(1 << this->bits));
}

int Fixed::toInt() const
{
	return ((int)(this->val >> this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
