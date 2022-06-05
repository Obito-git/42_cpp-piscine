//
// Created by amyroshn on 6/5/22.
//

#include "TypeConverter.hpp"

StringTypeConverter::StringTypeConverter(): _i(T_INT), _c(T_CHAR),
											_f(T_FLOAT), _d(T_DOUBLE){
}

StringTypeConverter::StringTypeConverter(const std::string& s):
					_s(s), _i(T_INT), _c(T_CHAR),
					_f(T_FLOAT), _d(T_DOUBLE){
	if (is_special_case())
		return;
	if (is_error_case())
		std::cout << "ERROR CASE DETECTED" << std::endl;
	/*
	long temp = strtol(_s.data(), NULL, 10);
	if ((temp == 0 && _s != "0") || (temp > INT_MAX || temp < INT_MIN))
	{

	}
	 */
}

bool StringTypeConverter::is_special_case() {
	//                  int, char, float, double
	std::string nan[] = {"impossible", "impossible", "nan", "nan"};
	std::string n_inf[] = {"-inf", "impossible", "-inf", "-inf"};
	std::string p_inf[] = {"+inf", "impossible", "+inf", "+inf"};
	std::string *pointer = NULL;
	if (_s == "+inf" || _s == "+inff")
		pointer = p_inf;
	if (_s == "-inf" || _s == "-inff")
		pointer = n_inf;
	if (_s == "nan" || _s == "nanf")
		pointer = nan;
	if (pointer)
	{
		_i.msg = pointer[T_INT];
		_c.msg = pointer[T_CHAR];
		_f.msg = pointer[T_FLOAT];
		_d.msg = pointer[T_DOUBLE];
		return true;
	}
	return false;
}

bool StringTypeConverter::is_error_case() {
	long temp = strtol(_s.data(), NULL, 10);
	if (temp > INT_MAX || temp < INT_MIN)
		return true;
	if (_s.length() == 1 && temp == 0)
		return false;
	int i = 0;
	while (_s[i] && isnumber(_s[i]))
		i++;
	if (_s[i] == '.' && isnumber(_s[i + 1]))
		i++;
	while (_s[i] && isnumber(_s[i]))
		i++;
	if (_s[i] == 'f')
		i++;
	if (_s[i])
		return true;
	return false;
}


//structure constructors/destructors
StringTypeConverter::Var::Var(char type): type(type) {
	switch (type) {
		case T_CHAR:
			value = new char;
			break;
		case T_FLOAT:
			value = new float;
			break;
		case T_DOUBLE:
			value = new double;
			break;
		case T_INT:
			value = new int;
			break;
		default:
			throw WrongTypeException();
	}
	*(static_cast<char *>(value)) = 0;
}

StringTypeConverter::Var::~Var() {
	delete static_cast<int *>(value); //maybe error
}

bool StringTypeConverter::Var::is_converted() {
	return !msg.empty();
}

const char *StringTypeConverter::WrongTypeException::what() const throw() {
	return "Not existing type exception";
}


