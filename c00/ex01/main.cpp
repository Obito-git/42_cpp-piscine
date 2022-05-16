#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook book;
	std::cout << "Command list: ADD, SEARCH, EXIT" << std::endl;
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			book.add_contact();
		else if (command == "SEARCH")
			book.search_contact();
		if (command =="EXIT")
			break ;
		if (std::cin.good())
			std::cout << "Command list: ADD, SEARCH, EXIT" << std::endl;
	}
	return 0;
}