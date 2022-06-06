//
// Created by Anton on 05/06/2022.
//
#include "TypeConverter.hpp"

int main(int ac, char *av[]) {
	std::cout << std::numeric_limits<double>::infinity() << std::endl;
	if (static_cast<double>(LONG_MAX) > std::numeric_limits<double>::max())
		std::cout << "true" << std::endl;
	if (ac != 2) {
		std::cout << "Wrong arg count" << std::endl;
		return 1;
	}
	StringTypeConverter varname(av[1]);
	std::cout << varname << std::endl;
}