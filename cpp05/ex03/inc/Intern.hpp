//
// Created by amyroshn on 6/4/22.
//

#ifndef EX02_INTERN_HPP
#define EX02_INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {
public:
	Form *makeForm(const std::string& form_name, const std::string& target);
private:
	enum form_enumeration {
		shrubbery_creation,
		robotomy_request,
		presidential_pardon
	};
	static const int FORM_COUNT = 3;
};


#endif //EX02_INTERN_HPP
