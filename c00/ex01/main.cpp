#include "PhoneBook.hpp"

int main()
{
	std::string command;
	PhoneBook book;
	while (std::getline(std::cin, command))
	{
		if (!command.compare("ADD"))
			book.add_contact();
		else if (!command.compare("SEARCH"))
			;
		else if (!command.compare("EXIT"))
			break ;
		else
			std::cout << "Unknown command \"" << command << "\"" << std::endl;
	}
	return 0;
}