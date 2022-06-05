//
// Created by amyroshn on 6/5/22.
//

#include "TypeConverter.hpp"
StringTypeConverter::StringTypeConverter(const std::string &s) : _s(s) {}


//methods
void StringTypeConverter::transform_char() {
	int tmp = atoi(_s.data());
	if ((_s != "-1" && tmp == -1) || (tmp > 127 || tmp < 0))
		_c_msg;

}