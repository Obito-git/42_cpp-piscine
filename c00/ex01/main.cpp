#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook book;
	Contact test;
	std::cout << test << std::endl;
	while (true)
	{
		std::cout << "Command list: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contact();
		else if (command =="EXIT")
			break ;
	}
	return 0;
}