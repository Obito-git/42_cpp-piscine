//
// Created by amyroshn on 6/5/22.
//

#include "TypeConverter.hpp"

StringTypeConverter::StringTypeConverter() {}

StringTypeConverter::StringTypeConverter(const std::string& s): _s(s), _parsed_d(0) {
	if (is_special_case())
		return;
	_parsed_d = strtod(_s.data(), NULL);
	cast_to_c();
	cast_to_i();
	cast_to_f();
	cast_to_d();
}

bool StringTypeConverter::is_special_case() {
	//                  int, char, float, double
	std::string nan[] = {"impossible", "impossible", "nan", "nan"};
	std::string n_inf[] = {"-inf", "impossible", "-inf", "-inf"};
	std::string p_inf[] = {"+inf", "impossible", "+inf", "+inf"};
	std::string imp[] = {"impossible","impossible","impossible","impossible"};
	std::string *pointer = NULL;
	if (_s == "+inf" || _s == "+inff")
		pointer = p_inf;
	if (_s == "-inf" || _s == "-inff")
		pointer = n_inf;
	if (_s == "nan" || _s == "nanf")
		pointer = nan;
	if (!pointer && is_error_case())
		pointer = imp;
	if (pointer)
	{
		_i.msg = pointer[0];
		_c.msg = pointer[1];
		_f.msg = pointer[2] == "impossible" ? pointer[2] : pointer[2].append("f");
		_d.msg = pointer[3];
		return true;
	}
	return false;
}

bool StringTypeConverter::is_error_case() {
	int i = 0;
	if (_s[i] == '-')
		i++;
	if (!isnumber(_s[i]))
		return true;
	while (_s[i] && isnumber(_s[i]))
		i++;
	if (_s[i] == '.')
		i++;
	while (_s[i] && isnumber(_s[i]))
		i++;
	if (_s[i] == 'f')
		i++;
	return (_s[i] != 0);
}

void StringTypeConverter::cast_to_c() {
	if (_parsed_d > std::numeric_limits<char>::max()
		|| _parsed_d < std::numeric_limits<char>::min()) {
		_c.msg = "impossible";
		return ;
	}
	*(static_cast<char *>(_c.value)) = static_cast<char>(_parsed_d);
}

void StringTypeConverter::cast_to_i() {
	if (_parsed_d > std::numeric_limits<int>::max()
		|| _parsed_d < std::numeric_limits<int>::min()) {
		_i.msg = "impossible";
		return ;
	}
	*(static_cast<int *>(_i.value)) = static_cast<int>(_parsed_d);
}

void StringTypeConverter::cast_to_f() {
	if (_parsed_d > std::numeric_limits<float>::max()
		|| _parsed_d < std::numeric_limits<float>::lowest()) {
		_f.msg = "impossible";
		return ;
	}
	*(static_cast<double *>(_f.value)) = static_cast<double>(_parsed_d);
}

void StringTypeConverter::cast_to_d() {
	*(static_cast<double *>(_d.value)) = static_cast<double>(_parsed_d);
}

std::ostream &operator<<(std::ostream &os, const StringTypeConverter &con) {
	os << "char: ";
	if (con._c.is_converted() && !isprint(*static_cast<char *>(con._c.value)))
		os << "Unprintable character";
	else if (!con._c.is_converted())
		os << con._c.msg;
	else
		os << "'" << static_cast<char *>(con._c.value) << "'";

	os << std::endl << "int: ";
	if (con._i.is_converted())
		os << *static_cast<int *>(con._i.value) << std::endl << "float: ";
	else
		os << con._i.msg << std::endl << "float: ";

	if (con._f.is_converted())
		os << std::setprecision(1) << std::fixed << *static_cast<double *>(con._f.value)
		<< "f" << std::endl << "double: ";
	else
		os << con._f.msg << std::endl << "double: ";

	if(con._d.is_converted())
		os << *static_cast<double *>(con._d.value);
	else
		os << con._d.msg;
	os << std::setprecision(0) << std::endl;
	return os;
}


//structure constructors/destructors
StringTypeConverter::Var::Var() {
	value = new double;
	*(static_cast<double *>(value)) = 0;
}

StringTypeConverter::Var::~Var() {
	delete static_cast<double *>(value);
}

bool StringTypeConverter::Var::is_converted() const {
	return msg.empty();
}

