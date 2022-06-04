//
// Created by Anton on 02/06/2022.
//

#include "Form.hpp"

//constructors / destructors
Form::Form(const std::string &name, int signGrade, int execGrade) : _name(name), _sign_grade(signGrade),
                                                                    _exec_grade(execGrade) {
	_is_signed = false;
	if (_exec_grade < 1)
		throw GradeTooHighException("execute");
	if (_exec_grade > 150)
		throw GradeTooLowException("execute");
	if (_sign_grade < 1)
		throw GradeTooHighException("sign");
	if (_sign_grade > 150)
		throw GradeTooLowException("sign");
}

Form::Form() : _name("Unnamed"), _sign_grade(150), _exec_grade(150){
	std::cout << "Attention! You create a Unnamed bureaucrat with 150 sign and exec grades" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _is_signed(other._is_signed), _sign_grade(other._sign_grade),
                                _exec_grade(other._exec_grade){
}

Form::~Form() {}

//methods
void Form::beSigned(const Bureaucrat &buro) {
	if (buro.getGrade() <= _sign_grade && !_is_signed) {
		_is_signed = true;
		std::cout << buro.getName() << " signed " << _name << std::endl;
	} else if (buro.getGrade() <= _sign_grade && _is_signed)
		std::cout << "Form " << _name << " is already signed" << std::endl;
	else {
		std::cout << buro.getName() << " couldn’t sign " << _name << " because his grade is too low." << std::endl;
		throw GradeTooLowException("sign");
	}
}

//overloading
Form &Form::operator=(const Form& other)
{
	if (this == &other)
		return (*this);
	std::cout << "ATTENTION! The const name can't be changed, only grade will be copied" << std::endl;
	_sign_grade = other._sign_grade;
	_is_signed = other._is_signed;
	_exec_grade = other._exec_grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << form._name << " form. " << (form._is_signed ? "Is signed. " : "Is not signed. ") << "Execution grade : ";
	os << form._exec_grade << ". Sign grade: " << form._sign_grade;
	return os;
}

//exceptions
const char *Form::GradeTooHighException::what() const throw() {
	return !strcmp(msg, "execute") ? ("Too high execution grade")
	                               : ("Too high sign grade");
}

const char *Form::GradeTooLowException::what() const throw() {
	return !strcmp(msg, "execute") ? ("Too low execution grade")
	                               : ("Too low sign grade.");
}
