//
// Created by amyroshn on 6/5/22.
//

#ifndef EX00_STRINGTYPECONVERTER_HPP
#define EX00_STRINGTYPECONVERTER_HPP
#include <cstdlib>
#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

class StringTypeConverter {
private:
	std::string _s;
	double _parsed_d;
	struct Var {
		Var();
		void *value;
		std::string msg;
		bool is_converted() const;
		virtual ~Var();
	};
	//vars
	Var _i;
	Var _c;
	Var _f;
	Var _d;
	//parsing
	bool is_special_case();
	bool is_error_case();
	//casters
	void cast_to_c();
	void cast_to_i();
	void cast_to_f();
	void cast_to_d();
public:
	//getters
	const Var &getI() const;
	const Var &getC() const;
	const Var &getF() const;
	const Var &getD() const;
public:
	//constructors/destructors
	StringTypeConverter();
	StringTypeConverter(const StringTypeConverter& c);
	StringTypeConverter(const std::string &s);
	virtual ~StringTypeConverter();
	//overloading
	StringTypeConverter &operator=(const StringTypeConverter& c);
};

std::ostream &operator<<(std::ostream &os, const StringTypeConverter &converter);


#endif //EX00_STRINGTYPECONVERTER_HPP
