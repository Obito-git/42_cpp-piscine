#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {
		ShrubberyCreationForm a("target");
		Bureaucrat b("Bob", 138);
		b.signForm(a);
		std::cout << std::endl;
		b.signForm(a);
		std::cout << std::endl;
		a.execute(b);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
}