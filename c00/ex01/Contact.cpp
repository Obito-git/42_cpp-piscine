#include "Contact.hpp"

Contact::Contact()
{
	this->_id = 0;
	this->_is_set = false;
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

std::ostream &operator<<(std::ostream &os, const Contact &contact) {
	os << "_first_name: " << contact._first_name << " _last_name: " << contact._last_name << " _nickname: "
	   << contact._nickname << " _phone_number: " << contact._phone_number;
	return os;
}

bool Contact::isIsSet() const {
	return _is_set;
}

void Contact::setIsSet(bool isSet) {
	_is_set = isSet;
}
