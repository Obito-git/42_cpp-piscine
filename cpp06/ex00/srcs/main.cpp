//
// Created by Anton on 05/06/2022.
//
#include "TypeConverter.hpp"

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Wrong arg count" << std::endl;
		return 1;
	}
	StringTypeConverter varname(av[1]);
}