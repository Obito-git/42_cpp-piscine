#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *a = NULL;
	try {
		a = new Bureaucrat("Bob", 41);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << *a << std::endl;
	delete a;
	std::cout << std::endl << "--------------------------" << std::endl << std::endl;
	try {
		Bureaucrat b;
		std::cout << std::endl << b << std::endl << std::endl;
		Bureaucrat c("Sam", 100);
		std::cout << std::endl << c << std::endl << std::endl;
		b = c;
		std::cout << std::endl << b << std::endl << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}