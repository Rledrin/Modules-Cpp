#include "contact.hpp"

int add(class contact *contacts, int i)
{
	std::string		str;
	contacts[i].set_index(i);
	std::cout << "First name :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_name(str);
	str.clear();
	std::cin.clear();
	std::cout << "Last name :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_lname(str);
	str.clear();
	std::cin.clear();
	std::cout << "Nickname :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_nickname(str);
	str.clear();
	std::cin.clear();
	std::cout << "Login :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_login(str);
	str.clear();
	std::cin.clear();
	std::cout << "Postal address :" << std::endl;
	std::getline(std::cin, str);
	if (str.empty())
		return 1;
	contacts[i].set_postadd(str);
	str.clear();
	std::cin.clear();
	std::cout << "Email :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_email(str);
	str.clear();
	std::cin.clear();
	std::cout << "Phone number :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_phone(str);
	str.clear();
	std::cin.clear();
	std::cout << "Birthday date :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_bdate(str);
	str.clear();
	std::cin.clear();
	std::cout << "Favorite meal :" << std::endl;
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_favmeal(str);
	std::cin.clear();
	std::cout << "Underwear Color :" << std::endl;
	str.clear();
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_underwearCol(str);
	std::cout << "Darkest secret :" << std::endl;
	str.clear();
	std::cin.clear();
	std::getline( std::cin , str );
	if (str.empty())
		return 1;
	contacts[i].set_secret(str);
	return 0;
}

void printtenCol(std::string str, int i)
{
	if (str.empty())
		std::cout << "         " << i;
	else
	{
		int len = 10 - str.length();
		if (len > 0)
		{
			for (int m = 0; m < len; m++)
				std::cout << " ";
			std::cout << str;
		}
		else if (len == 0) std::cout << str;
		else
			std::cout << str.substr(0, 9) << ".";
	}
}

void printcontact(class contact contacts)
{
	std::cout << std::endl;
	std::cout << "First name     : " << contacts.get_name() << std::endl;
	std::cout << "Last name      : " << contacts.get_lname()  << std::endl;
	std::cout << "Nickname       : " << contacts.get_nickname() << std::endl;
	std::cout << "Login          : " << contacts.get_login() << std::endl;
	std::cout << "Postal address : " << contacts.get_postadd() << std::endl;
	std::cout << "Email          : " << contacts.get_email() << std::endl;
	std::cout << "Phone          : " << contacts.get_phone() << std::endl;
	std::cout << "Birthday       : " << contacts.get_bdate() << std::endl;
	std::cout << "Favorite meal  : " << contacts.get_favmeal() << std::endl;
	std::cout << "Underwear      : " << contacts.get_underwearCol() << std::endl;
	std::cout << "Secret         : " << contacts.get_secret() << std::endl << std::endl;
}

void search(int cmp, class contact *contacts)
{
	std::string	str;
	int indc = 0;

	if (cmp == 0 || contacts[cmp - 1].get_secret().empty())
	{
		std::cout << "Contact list empty." << std::endl;
		return ;
	}
	for (int i = 0 ; i < cmp ; i++)
	{
		printtenCol(str, contacts[i].get_index());
		std::cout << "|";
		printtenCol(contacts[i].get_name(), 0);
		std::cout << "|";
		printtenCol(contacts[i].get_lname(), 0);
		std::cout << "|";
		printtenCol(contacts[i].get_login(), 0);
		std::cout << std::endl;
	}
	std::getline( std::cin , str );
	indc = (int)std::strtol(str.c_str(), NULL, 10);

	if (indc < 0 || indc > 7)
		std::cout << "Invalid index" << std::endl;
	else if (contacts[indc].get_secret().empty())
		std::cout << "Contact index empty" << std::endl;
	else printcontact(contacts[indc]);
}

int main()
{
	std::string		str;
	class contact	contacts[8];
	int				i = 0;

	while(1)
	{
		std::cout << "Command :\n- ADD\n- SEARCH\n- EXIT"<< std::endl;
		std::getline(std::cin , str);
		if (str.compare("EXIT") == 0)
			break;
		else if (str.compare("ADD") == 0)
		{
			std::cin.clear();
			if (i >= 7)
			{
				std::cout<< "Too many contact registered" << std::endl;
				continue ;
			}
			if (add(contacts, i++) == 1)
				i--;
			str.clear();
		}
		else if (str.compare("SEARCH") == 0)
		{
			std::cin.clear();
			search(i, contacts);
			str.clear();
		}
		std::cin.clear();
	}
	return(0);
}

