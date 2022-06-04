//
// Created by amyroshn on 6/4/22.
//

#include "RobotomyRequestForm.hpp"

//Constructors destructors
RobotomyRequestForm::RobotomyRequestForm():
				Form("RobotomyRequestForm", 72, 45),
				_target("Unknown target") {
	std::cout << "ATTENTION. You are created form without target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
		Form("RobotomyRequestForm", 72, 45),
		_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

//methods
void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (isSignedForm() && executor.getGrade() <= getExecFormGrade())
	{
		std::cout << "Brrrrrrrrrrrrrrrr" << std::endl << _target;
		srand ( time(NULL) );
		std::cout << (rand() % 10 + 1 >= 5 ? " has been robotomized successfully" : " is not robotomized");
		std::cout << std::endl;
	} else if (!isSignedForm()) {
		throw Form::IsNotSignException();
	} else
		throw Form::GradeTooLowException("execute");
}

//overloadings
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this == &other)
		return (*this);
	std::cout << "ATTENTION! Form have only constant fields, nothing will be assign" << std::endl;
	return (*this);
}


