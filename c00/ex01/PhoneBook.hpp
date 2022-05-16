#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
		static const int MAX_CONTACTS = 8;
private:
		int _current_cont;
		Contact _list[8];
};
#endif