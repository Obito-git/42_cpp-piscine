//
// Created by amyroshn on 6/4/22.
//

#include "Intern.hpp"

Form *Intern::makeForm(const std::string &form_name, const std::string &target) {
	Form *res = NULL;
	int chosen_form = FORM_COUNT;
	std::string form_lower = form_name;
	for (size_t i = 0; i < form_lower.length(); i++)
		if (isupper(form_lower.at(i)))
			form_lower[i] = char(tolower(form_lower.at(i)));
	std::string arr[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < FORM_COUNT && chosen_form == FORM_COUNT; i++)
		if (form_lower == arr[i])
			chosen_form = i;
	switch (chosen_form) {
		case shrubbery_creation:
			res = new ShrubberyCreationForm(target);
			break;
		case robotomy_request:
			res = new RobotomyRequestForm(target);
			break;
		case presidential_pardon:
			res = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Can't find " << form_name << ", bye!" << std::endl;
	}
	if (res) { std::cout << "Intern creates " << form_name << std::endl; }
	return res;
}
