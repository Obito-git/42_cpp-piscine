#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#define SET_FIRSTNAME 1
#define SET_LASTNAME 2
#define SET_NICKNAME 3
#define SET_NUMBER 4
#define SET_SECRET 5

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
		static const int MAX_CONTACTS = 8;

private:
		int _current_cont;
        Contact _list[MAX_CONTACTS];
		static void set_contact_field(Contact *c, const std::string& msg, int field);
};
#endif