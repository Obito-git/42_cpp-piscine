//
// Created by amyroshn on 6/1/22.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
	const std::string _name;
	int _grade;
public:
	//constructors / destructor
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& other);
	virtual ~Bureaucrat();

	//methods
	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	//overloading

	Bureaucrat &operator=(const Bureaucrat& other);

	//exceptions
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
