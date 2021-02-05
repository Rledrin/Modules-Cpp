#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

class contact
{
private:
	int index;
	std::string name, lname, nickname, login, postadd, email, phone, bdate, favmeal, underwearCol, secret;

public:
	std::string get_name();
	std::string get_lname();
	std::string get_nickname();
	std::string get_login();
	std::string get_postadd();
	std::string get_email();
	std::string get_phone();
	std::string get_bdate();
	std::string get_favmeal();
	std::string get_underwearCol();
	std::string get_secret();
	int get_index();
	void set_name(std::string str);
	void set_lname(std::string str);
	void set_nickname(std::string str);
	void set_login(std::string str);
	void set_postadd(std::string str);
	void set_email(std::string str);
	void set_phone(std::string str);
	void set_bdate(std::string str);
	void set_favmeal(std::string str);
	void set_underwearCol(std::string str);
	void set_secret(std::string str);
	void set_index(int indx);

};

#endif