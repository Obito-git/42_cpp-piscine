#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
	private:
		static const int _MAX_CONTACTS = 8;
		int _current_cont;
		Contact _list[8];
};
#endif