#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("rObotomy request", "robo");
	std::cout << rrf->getName() << std::endl;
	delete rrf;	
	std::cout << std::endl << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery CREATION", "shrr");
	std::cout << rrf->getName() << std::endl;
	delete rrf;
	std::cout << std::endl << std::endl;
	rrf = someRandomIntern.makeForm("PRESIDENTIAL PARDON", "pres");
	std::cout << rrf->getName() << std::endl;
	delete rrf;
	rrf = someRandomIntern.makeForm("gggggg", "pres");
	delete rrf;
}