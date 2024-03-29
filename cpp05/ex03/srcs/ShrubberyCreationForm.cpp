//
// Created by amyroshn on 6/4/22.
//

#include "ShrubberyCreationForm.hpp"

//Constructors destructors
ShrubberyCreationForm::ShrubberyCreationForm():
				Form("ShrubberyCreationForm", 145, 137),
				_target("Unknown target"), INPUT_FILENAME("inc/Three.txt") {
	std::cout << "ATTENTION. You are created form without target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
		Form("ShrubberyCreationForm", 145, 137),
		_target(target), INPUT_FILENAME("inc/Three.txt") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//methods

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (isSignedForm() && executor.getGrade() <= getExecFormGrade())
	{
		std::ofstream out_f;
		std::ifstream in_f;
		try {
			write_img_in_file(out_f, in_f);
			std::cout << "Target " << _target << " of " << " shrubbery form was executed by "
												<< executor.getName() <<"!" << std::endl;
		} catch (std::exception& e) {
			std::cout << "EXCEPTION: [" << e.what() << "]" << std::endl;
		}
	} else if (!isSignedForm()) {
		throw Form::IsNotSignException();
	} else
		throw Form::GradeTooLowException("execute");
}


//overloadings
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this == &other)
		return (*this);
	std::cout << "ATTENTION! Form have only constant fields, nothing will be assign" << std::endl;
	return (*this);
}

//exceptions

const char *ShrubberyCreationForm::ShrubberyFileException::what() const throw() {
	std::string s(msg);
	return s == "in" ? "Input file error, can't open or file is empty" :
						"Output file error, cant create/open of write";
}

//file private functions

void ShrubberyCreationForm::read_file(std::string& res, std::ifstream& in_f) const {
	if (!in_f.is_open())
		throw ShrubberyFileException("in");
	std::string tmp;
	while (getline(in_f, tmp))
		res.append(tmp).append("\n");
	in_f.close();
	if (res.length() == 0)
		throw ShrubberyFileException("in");
}

void ShrubberyCreationForm::write_img_in_file(std::ofstream& out_f, std::ifstream& in_f) const {
	std::string outfile_name(_target);
	outfile_name.append("_shrubbery");

	std::string three_img;
	in_f.open(INPUT_FILENAME.data(), std::ios::in);
	read_file(three_img, in_f);
	out_f.open(outfile_name.data(), std::ios::trunc);
	if (!out_f.is_open())
		throw ShrubberyFileException("out");
	out_f.write(three_img.data(), long(three_img.length()));
	out_f.close();
}