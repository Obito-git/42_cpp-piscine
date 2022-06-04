//
// Created by amyroshn on 6/4/22.
//

#include "PresidentialPardonForm.hpp"

//Constructors destructors
PresidentialPardonForm::PresidentialPardonForm():
				Form("PresidentialPardonForm", 25, 5),
				_target("Unknown target") {
	std::cout << "ATTENTION. You are created form without target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
		Form("PresidentialPardonForm", 25, 5),
		_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

//methods
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (isSignedForm() && executor.getGrade() <= getExecFormGrade())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	} else if (!isSignedForm()) {
		throw Form::IsNotSignException();
	} else
		throw Form::GradeTooLowException("execute");
}

//overloadings
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this == &other)
		return (*this);
	std::cout << "ATTENTION! Form have only constant fields, nothing will be assign" << std::endl;
	return (*this);
}


