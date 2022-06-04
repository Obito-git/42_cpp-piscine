//
// Created by amyroshn on 6/1/22.
//

#include "Bureaucrat.hpp"

//constructors/destructors
Bureaucrat::Bureaucrat() : _name("Unnamed"), _grade(150) {
	std::cout << "Attention! You create a Unnamed bureaucrat with 150 grade" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
}

Bureaucrat::~Bureaucrat() {
}


Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

//methods

const std::string &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

//overloading

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat._name << ", bureaucrat grade " << bureaucrat._grade;
	return os;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	std::cout << "The const name can't be changed, only grade will be copied" << std::endl;
	_grade = other._grade;
	return (*this);
}





//exceptions

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Too high grade. The max grade is 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Too low grade. The minimal grade is 150");
}
