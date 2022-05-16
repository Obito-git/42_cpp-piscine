#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_current_cont = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::set_contact_field(Contact *c, const std::string& msg, int field)
{
	std::string tmp;

	if (std::cin.good())
		std::cout << msg << std::endl;
	std::getline(std::cin, tmp);
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
	this->_list[this->_current_cont].setId(this->_current_cont);
	this->_list[this->_current_cont].setIsSet(true);
	this->_current_cont++;
	if (_current_cont == PhoneBook::MAX_CONTACTS)
		_current_cont = 0;
}

void PhoneBook::search_contact() {
	if (!this->_list[0].isIsSet())
	{
		std::cout << "Your phone book is empty" << std::endl;
		return ;
	}
	for (int i = 0; i < 8 && this->_list[i].isIsSet(); i++)
		std::cout << this->_list[i] << std::endl;
}



