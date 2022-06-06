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
	struct Var {
		Var();
		void *value;
		std::string msg;
		bool is_converted() const;
		virtual ~Var();
	};
	Var _i;
	Var _c;
	Var _f;
	Var _d;
	bool is_special_case();
	bool is_error_case();
	double _parsed_d;
	void cast_to_c();
	void cast_to_i();
	void cast_to_f();
	void cast_to_d();
public:
	friend std::ostream &operator<<(std::ostream &os, const StringTypeConverter &converter);

	StringTypeConverter();
	StringTypeConverter(const std::string &s);

};


#endif //EX00_STRINGTYPECONVERTER_HPP
