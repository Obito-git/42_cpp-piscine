//
// Created by amyroshn on 6/7/22.
//

#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP
#include <string>
#include <ostream>

struct Data {
	int value;
	std::string s;
	Data(int value, const std::string &s);
};
std::ostream &operator<<(std::ostream &os, const Data &data);


#endif //EX01_DATA_HPP
