//
// Created by Anton on 02/06/2022.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	bool _is_signed;
	const int _sign_grade;
	const int _exec_grade;
public:
	//constructors/destructors
	Form();
	Form(const Form& other);
	Form(const std::string &name, int signGrade, int execGrade);
	virtual ~Form();

	//methods
	void beSigned(const Bureaucrat& buro);

	//getters
	const std::string &getName() const;
	bool isSignedForm() const;
	int getSignFormGrade() const;
	int getExecFormGrade() const;

	//setters
	void setIsSigned(bool isSigned);

	//overloading
	Form &operator=(const Form& other);

	//exceptions
	class GradeTooHighException : public std::exception {
	private:
		const char *msg;
	public:
		GradeTooHighException(const char *m): msg(m){}
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
	private:
		const char *msg;
	public:
		GradeTooLowException(const char *m): msg(m){}
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
