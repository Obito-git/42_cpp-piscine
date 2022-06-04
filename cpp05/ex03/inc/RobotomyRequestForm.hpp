//
// Created by amyroshn on 6/4/22.
//

#ifndef EX02_ROBOTONOMYREQUESTFORM_HPP
#define EX02_ROBOTONOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>


class RobotomyRequestForm: public Form{
private: //variables
	std::string _target;
public:
	//constructors/destructors
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm(const std::string& target);
	virtual ~RobotomyRequestForm();

	//methods
	virtual void execute(const Bureaucrat &executor) const;

	//overloadings

	RobotomyRequestForm &operator=(const RobotomyRequestForm& other);

};


#endif //EX02_ROBOTONOMYREQUESTFORM_HPP

