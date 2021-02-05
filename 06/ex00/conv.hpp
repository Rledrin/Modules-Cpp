#ifndef CONV_HPP
#define CONV_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>

class conv
{
public:
	conv();
	~conv();

	float isConv(const std::string &str);
	char toChar(float);
	int toInt(float);
	float toFloat(float);
	double toDouble(float);

	class NotConv : public std::exception
	{
	public:
		NotConv() throw();
		NotConv(const NotConv &) throw();
		NotConv &operator=(const NotConv &) throw();
		virtual ~NotConv() throw();
		virtual const char *what() const throw();
	};
};






#endif
