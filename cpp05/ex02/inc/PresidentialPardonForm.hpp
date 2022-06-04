//
// Created by amyroshn on 6/4/22.
//

#ifndef EX02_PRESEDENTIOALPARDONFORM_HPP
#define EX02_PRESEDENTIOALPARDONFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>


class PresidentialPardonForm: public Form{
private: //variables
	std::string _target;
public:
	//constructors/destructors
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm(const std::string& target);
	virtual ~PresidentialPardonForm();

	//methods
	virtual void execute(const Bureaucrat &executor) const;

	//overloadings

	PresidentialPardonForm &operator=(const PresidentialPardonForm& other);

};


#endif //EX02_PRESEDENTIOALPARDONFORM_HPP

