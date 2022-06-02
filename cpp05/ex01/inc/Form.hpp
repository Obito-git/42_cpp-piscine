//
// Created by Anton on 02/06/2022.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	const std::string _name;
	bool _is_signed;
	int _sign_grade;
	int _exec_grade;
public:
	//constructors/destructors
	Form();
	Form(const Form& other);
	Form(const std::string &name, int signGrade, int execGrade);
	virtual ~Form();

	//methods
	void beSigned(const Bureaucrat& buro);

	//overloading
	friend std::ostream &operator<<(std::ostream &os, const Form &form);
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


#endif //EX01_FORM_HPP
