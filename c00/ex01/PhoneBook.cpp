#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_current_cont = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
	std::string tmp("");

	std::cout << "Enter first name:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].set_first_name(tmp);

	std::cout << "Enter last name:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].set_last_name(tmp);

	
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].set_nickname(tmp);

	std::cout << "Enter phone number:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].set_phone_number(tmp);
	
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].set_darkest_secret(tmp);

	this->_current_cont++;
	if (_current_cont == this->_MAX_CONTACTS)
		_current_cont = 0;
}