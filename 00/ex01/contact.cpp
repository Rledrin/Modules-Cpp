#include "contact.hpp"

std::string contact::get_name()
{
	return name;
}

std::string contact::get_lname()
{
	return lname;
}

std::string contact::get_nickname()
{
	return nickname;
}

std::string contact::get_login()
{
	return login;
}

std::string contact::get_postadd()
{
	return postadd;
}

std::string contact::get_email()
{
	return email;
}

std::string contact::get_phone()
{
	return phone;
}

std::string contact::get_bdate()
{
	return bdate;
}

std::string contact::get_favmeal()
{
	return favmeal;
}

std::string contact::get_underwearCol()
{
	return underwearCol;
}

std::string contact::get_secret()
{
	return secret;
}

void contact::set_name(std::string str)
{
	name = str;
}

void contact::set_lname(std::string str)
{
	lname = str;
}

void contact::set_nickname(std::string str)
{
	nickname = str;
}

void contact::set_login(std::string str)
{
	login = str;
}

void contact::set_postadd(std::string str)
{
	postadd = str;
}

void contact::set_email(std::string str)
{
	email = str;
}

void contact::set_phone(std::string str)
{
	phone = str;
}

void contact::set_bdate(std::string str)
{
	bdate = str;
}

void contact::set_favmeal(std::string str)
{
	favmeal = str;
}

void contact::set_underwearCol(std::string str)
{
	underwearCol = str;
}

void contact::set_secret(std::string str)
{
	secret = str;
}

int contact::get_index()
{
	return index;
}

void contact::set_index(int indx)
{
	index = indx;
}
