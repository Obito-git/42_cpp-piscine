#include "Contact.hpp"
#include <iomanip>


Contact::Contact()
{
	this->_id = 0;
	this->_is_set = false;
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}
Contact::~Contact() {}

void Contact::setId(int id) {
	this->_id = id;
}

void Contact::setFirstName(const std::string &firstName) {
	_first_name = firstName;
}

void Contact::setLastName(const std::string &lastName) {
	_last_name = lastName;
}

void Contact::setNickname(const std::string &nickname) {
	_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	_phone_number = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	_darkest_secret = darkestSecret;
}



int     Contact::get_outputw(const std::string& s)
{
	return s.length() > 10 ? int(s.length()) : 10;
}

std::ostream &operator<<(std::ostream &os, const Contact &contact) {
	os << std::setw(Contact::get_outputw(contact._first_name)) <<  "First name" << "|";
	os << std::setw(Contact::get_outputw(contact._last_name)) << "Last name" << "|";
	os << std::setw(Contact::get_outputw(contact._nickname)) << "Nickname" << "|";
	os << std::setw(Contact::get_outputw(contact._phone_number)) << "Number" << "|";
	os << std::setw(Contact::get_outputw(contact._darkest_secret)) << "Secret" << std::endl;
	os << std::setw(10) << contact._first_name << "|";
	os << std::setw(10) << contact._last_name << "|";
	os << std::setw(10) << contact._nickname << "|";
	os << std::setw(10) << contact._phone_number << "|";
	os << std::setw(10) << contact._darkest_secret << std::endl;
	return os;
}

bool Contact::isIsSet() const {
	return _is_set;
}

void Contact::setIsSet(bool isSet) {
	_is_set = isSet;
}

const std::string &Contact::getFirstName() const {
	return _first_name;
}

const std::string &Contact::getLastName() const {
	return _last_name;
}

const std::string &Contact::getNickname() const {
	return _nickname;
}

int Contact::getId() const {
	return _id;
}
