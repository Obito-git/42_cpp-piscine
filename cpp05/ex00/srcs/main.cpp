#include <iostream>
#include "Bureaucrat.hpp"

void trybeaurocrat(const char *name, int grade, const char *expected)
{
	std::cout << "Expected: " << expected << std::endl;
	try{
		Bureaucrat a(name, grade);
		std::cout << a << std::endl;
	} catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void try_increment_decrement(Bureaucrat& a, char sign, int count)
{
	std::cout << "Expected " << (sign == '+' ? a.getGrade() - count : a.getGrade() + count) << " final grade, so ";
	if (sign == '+' && a.getGrade() - sign < 1)
		std::cout << "TOO HIGH EXCEPTION";
	else if (sign == '-' && a.getGrade() + sign > 150)
		std::cout << "TOO LOW EXCEPTION";
	else
		std::cout << "NO EXCEPTIONS. IT'S OK";
	std::cout << std::endl;
	try {
		for (int i = 0; i < count; i++)
			sign == '+' ? a.incrementGrade() : a.decrementGrade();
		std::cout << a << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}


int main()
{
	/* try test */
	trybeaurocrat("Bob", 151, "too low grade");
	trybeaurocrat("Alex", -42, "too high grade");
	trybeaurocrat("Kotlin", 42, "OK");
	std::cout << std::endl << std::endl;
	/*increment/decrement test*/
	Bureaucrat a("Bob", 100);
	try_increment_decrement(a, '-', 42);
	try_increment_decrement(a, '-', 100);
	try_increment_decrement(a, '+', 149);
	try_increment_decrement(a, '+', 1);
	try_increment_decrement(a, '-', 41);

}