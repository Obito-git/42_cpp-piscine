#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_current_cont = 0;
}

PhoneBook::~PhoneBook()
{

}

bool PhoneBook::have_only_spaces(const std::string &msg)
{
	size_t i;
	for (i = 0; i < msg.length() && (msg.at(i) == ' ' || msg.at(i) == '\t'); i++)
		;
	return (i == msg.length());
}

void PhoneBook::set_contact_field(Contact *c, const std::string& msg, int field)
{
	std::string tmp;

	while (std::cin.good() && (tmp.empty() || tmp == "\n"))
	{
		std::cout << msg << std::endl;
		std::getline(std::cin, tmp);
		if (std::cin.good() && (tmp.empty() || tmp == "\n" || PhoneBook::have_only_spaces(tmp)))
		{
			tmp = "";
			std::cout << "You can't have an empty fields, please try again" << std::endl;
			continue;
		}
		if (std::cin.good() && field == SET_NUMBER && tmp.find_first_not_of("0123456789") != std::string::npos)
		{
			tmp = "";
			std::cout << std::endl << "The number can contain only numbers, please try again" << std::endl;
			continue;
		}
	}

	switch (field) {
		case SET_FIRSTNAME:
			c->setFirstName(tmp);
			break;
		case SET_LASTNAME:
			c->setLastName(tmp);
			break;
		case SET_NICKNAME:
			c->setNickname(tmp);
			break;
		case SET_NUMBER:
			c->setPhoneNumber(tmp);
			break;
		default:
			c->setDarkestSecret(tmp);
	}
}


void PhoneBook::add_contact()
{
	set_contact_field(&this->_list[this->_current_cont], "Enter first name", SET_FIRSTNAME);
	set_contact_field(&this->_list[this->_current_cont], "Enter last name", SET_LASTNAME);
	set_contact_field(&this->_list[this->_current_cont], "Enter nickname", SET_NICKNAME);
	set_contact_field(&this->_list[this->_current_cont], "Enter phone number", SET_NUMBER);
	set_contact_field(&this->_list[this->_current_cont], "Enter secret", SET_SECRET);
	this->_list[this->_current_cont].setId(this->_current_cont + 1);
	this->_list[this->_current_cont].setIsSet(true);
	this->_current_cont++;
	if (_current_cont == PhoneBook::MAX_CONTACTS)
		_current_cont = 0;
}

std::string PhoneBook::set_format(const std::string &s)
{
	std::string res = s;
	if (s.length() != 10)
		res = res.substr(0, 9);
	if (s.length() > 10)
		res.append(".");
	return res;
}

void PhoneBook::search_contact() {
	std::string tmp;
	int         last_contact;

	if (!this->_list[0].isIsSet())
	{
		std::cout << "Your phone book is empty" << std::endl;
		return ;
	}
	for (int i = 0; i < 8 && this->_list[i].isIsSet(); i++) {
		Contact l = _list[i];
		std::cout << std::setw(10) <<  l.getId() << "|";
		std::cout << std::setw(10) <<  set_format(l.getFirstName()) << "|";
		std::cout << std::setw(10) <<  set_format(l.getLastName()) << "|";
		std::cout << std::setw(10) <<  set_format(l.getNickname()) << std::endl;
		last_contact = i + 1;
	}
	while (std::cin.good() && (tmp.empty() || tmp == "\n"))
	{
		std::cout << "Enter index of contact from 1 to " << last_contact << std::endl;
		std::getline(std::cin, tmp);
		if (!std::cin.good())
			return ;
		if ((tmp.empty() || tmp == "\n" || PhoneBook::have_only_spaces(tmp))
			|| (tmp.length() == 1 && tmp.find_first_not_of("12345678") != std::string::npos)
			|| !(tmp.at(0) - '0' > 0 && tmp.at(0) - '0' <= last_contact))
		{
			tmp = "";
			continue;
		}
	}
	std::cout << this->_list[int(tmp.at(0) - '0') - 1] << std::endl;
}

