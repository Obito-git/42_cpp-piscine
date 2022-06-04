//
// Created by amyroshn on 6/4/22.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form{
private: //variables
	std::string _target;
	const std::string INPUT_FILENAME;
private: //functions
	void read_file(std::string &res, std::ifstream &in_f) const;
	void write_img_in_file(std::ofstream &out_f, std::ifstream &in_f) const;
public:
	//constructors/destructors
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm(const std::string& target);
	virtual ~ShrubberyCreationForm();

	//methods
	virtual void execute(const Bureaucrat &executor) const;

	//overloadings

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);

	//exceptions
	class ShrubberyFileException: public std::exception {
	private:
		const char *msg;
	public:
		ShrubberyFileException(const char *msg) : msg(msg) {}
		virtual const char *what() const throw();
	};
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
