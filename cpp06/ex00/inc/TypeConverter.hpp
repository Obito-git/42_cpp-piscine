//
// Created by amyroshn on 6/5/22.
//

#ifndef EX00_STRINGTYPECONVERTER_HPP
#define EX00_STRINGTYPECONVERTER_HPP
#include <cstdlib>
#include <string>
#include <iostream>
#include <limits>

#define T_INT       0
#define T_CHAR      1
#define T_FLOAT     2
#define T_DOUBLE    3

class StringTypeConverter {
private:
	std::string _s;
	struct Var {
		Var(char type);
		void *value;
		char type;
		std::string msg;
		bool is_converted();
		virtual ~Var();
	};
	Var _i;
	Var _c;
	Var _f;
	Var _d;
	bool is_special_case();
	bool is_error_case();
public:
	StringTypeConverter();
	StringTypeConverter(const std::string &s);



	//exceptions
private:
	class WrongTypeException: public std::exception {
	public:
		const char *what() const throw();
	};
};


#endif //EX00_STRINGTYPECONVERTER_HPP
