#include "conv.hpp"

conv::conv(){}
conv::~conv(){}

float conv::isConv(const std::string &str)
{
	float ret;
	try
	{
		if (str.length() == 3 && str.c_str()[0] == '\'' && str.c_str()[2] == '\'')
			return (static_cast<float>(str.c_str()[1]));
		ret = atof(str.c_str());
	}
	catch(const std::exception& e)
	{
		throw conv::NotConv();
	}
	return ret;
}

char conv::toChar(float f)
{
	char val = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	else if (val < 32 || val > 126)
		throw std::string("Non displayable");
	return (val);
}

int conv::toInt(float f)
{
	int val = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	return (val);
}

float conv::toFloat(float f)
{
	return (static_cast<float>(f));
}

double conv::toDouble(float f)
{
	return (static_cast<double>(f));
}

conv::NotConv::NotConv() throw() {}

conv::NotConv::NotConv(const NotConv& copy) throw() { (void)copy; }

conv::NotConv::~NotConv() throw() {}

conv::NotConv &conv::NotConv::operator=(const NotConv& op) throw() 
{
	if (this == &op)
		return (*this); 
	return (*this);
}

const char *conv::NotConv::what() const throw() { return ("Invalid format or can't be converted."); }

