//
// Created by amyroshn on 6/7/22.
//

#include "Data.hpp"

Data::Data(int value, const std::string &s) : value(value), s(s) {}

std::ostream &operator<<(std::ostream &os, const Data &data) {
	os << "value: " << data.value << " s: " << data.s;
	return os;
}
