#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class Contact {

public:
	Contact();
	~Contact();
	void setId(int id);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
	void setPhoneNumber(const std::string &phoneNumber);
	void setDarkestSecret(const std::string &darkestSecret);
	void setFirstName(const std::string &firstName);
	friend std::ostream &operator<<(std::ostream &os, const Contact &contact);

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	bool        _is_set;
	int         _id;
public:
	bool isIsSet() const;
	void setIsSet(bool isSet);
};

#endif