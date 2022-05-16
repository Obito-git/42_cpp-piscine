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
	std::string tmp;

	std::cout << "Enter first name:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].setFirstName(tmp);

	std::cout << "Enter last name:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].setLastName(tmp);

	
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].setNickname(tmp);

	std::cout << "Enter phone number:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].setPhoneNumber(tmp);
	
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> tmp;
	this->_list[this->_current_cont].setDarkestSecret(tmp);

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
