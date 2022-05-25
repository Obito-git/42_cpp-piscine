#include <iostream>
#include <string>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Addresses: " << std::endl;
	std::cout << "str       addr: " << &str << std::endl;
	std::cout << "stringPTR addr: " << stringPTR << std::endl;
	std::cout << "stringREF addr: " << &stringREF << std::endl << std::endl;

	std::cout << "Values: " << std::endl;
	std::cout << "str val:       " << str << std::endl;
	std::cout << "stringPTR val: " << *stringPTR << std::endl;
	std::cout << "stringREF val: " << stringREF << std::endl;
}