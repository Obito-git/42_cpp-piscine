#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void test(Form& f, Bureaucrat& b)
{
	std::cout << "---------------------------" << std::endl;
	std::cout << "Test of " << f.getName() << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << f << std::endl;
	std::cout << b << std::endl;
	std::cout << "Expected: " << std::endl;
	std::cout << (b.getGrade() <= f.getSignFormGrade() ? "Can sign" : "Can't sign") << std::endl;
	std::cout << (b.getGrade() <= f.getExecFormGrade() ? "Can execute" : "Can't execute") << std::endl << std::endl;
	std::cout << "RESULT:" << std::endl;
	try {
		b.signForm(f);
		b.executeForm(f);
	}
	catch (std::exception& e){
		std::cout << "EXCEPTION: [" << e.what() << "]" << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::string a;
	//ShrubberyCreationForm: Required grades: sign 145, exec 137
	//RobotomyRequestForm: Required grades: sign 72, exec 45
	//PresidentialPardonForm: Required grades: sign 25, exec 5
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~ ShrubberyCreationForm ~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	ShrubberyCreationForm form1("form1");
	Bureaucrat bureaucrat1("Buro 1", 150);
	test(form1, bureaucrat1);
	std::cin >> a;
	bureaucrat1.incrementGrade(10);
	test(form1, bureaucrat1);
	std::cin >> a;
	bureaucrat1.incrementGrade(10);
	test(form1, bureaucrat1);
	std::cin >> a;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~ RobotomyRequestForm ~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	RobotomyRequestForm form2("form2");
	Bureaucrat bureaucrat2("Buro 2", 80);
	test(form2, bureaucrat2);
	std::cin >> a;
	bureaucrat2.incrementGrade(10);
	test(form2, bureaucrat2);
	std::cin >> a;
	bureaucrat2.incrementGrade(40);
	test(form2, bureaucrat2);
	std::cin >> a;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~ 50% chance test ~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	test(form2, bureaucrat2);
	std::cin >> a;
	test(form2, bureaucrat2);
	std::cin >> a;
	test(form2, bureaucrat2);
	std::cin >> a;
	test(form2, bureaucrat2);
	std::cin >> a;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~ PresidentialPardonForm ~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	PresidentialPardonForm form3("form3");
	Bureaucrat bureaucrat3("Buro 3", 30);
	test(form3, bureaucrat3);
	std::cin >> a;
	bureaucrat3.incrementGrade(10);
	test(form3, bureaucrat3);
	std::cin >> a;
	bureaucrat3.incrementGrade(19);
	test(form3, bureaucrat3);
}