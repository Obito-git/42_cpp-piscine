//
// Created by amyroshn on 6/5/22.
//

#ifndef EX00_STRINGTYPECONVERTER_HPP
#define EX00_STRINGTYPECONVERTER_HPP
#include <cstdlib>
#include <string>

class StringTypeConverter {
private:
	//vars
	std::string _s;
	//char
	char _c;
	std::string _c_msg;
	//int
	int _i;
	std::string _i_msg;
	//float
	float _f;
	std::string _f_msg;
	//double
	double _d;
	std::string _d_msg;
	//methods
	void transform();
public:
	//constructors/destructors
	StringTypeConverter(const std::string &s);
	//vars
	const std::string P_INF = "+inf";
	const std::string P_INFF = "+inff";
	const std::string N_INF = "-inf";
	const std::string N_INFF = "-inff";
	const std::string P

	void transform_char();
};


#endif //EX00_STRINGTYPECONVERTER_HPP
