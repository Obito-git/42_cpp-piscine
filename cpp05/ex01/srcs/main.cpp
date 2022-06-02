#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void tryform(const char *name, int signgrade, int execgrade, const char *msg)
{
	std::cout << "Expected: " << msg << std::endl;
	try {
		Form a(name, signgrade, execgrade);
		Bureaucrat b("Scot", 42);
		a.beSigned(b);
		std::cout << a << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	tryform("a", 0, 150, "sign high");
	tryform("a", 155, 150, "sign low");
	tryform("a", 1, 0, "exec high");
	tryform("a", 1, 155, "exec low");
	tryform("a", 43, 150, "ok");
	tryform("a", 1, 150, "can't be signed, no form message bcs of exception");
}