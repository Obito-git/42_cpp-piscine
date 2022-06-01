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
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat();

	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat& other);

	const std::string &getName() const;

	int getGrade() const;

	virtual ~Bureaucrat();

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


#endif //EX00_BUREAUCRAT_HPP
