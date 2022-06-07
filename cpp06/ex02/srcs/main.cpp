//
// Created by amyroshn on 6/7/22.
//

#include <iostream>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::cout << std::endl;
	srand ( time(NULL) );
	switch (rand() % 3 + 1) {
		case 1:
			std::cout << "A class generated" << std::endl;
			return new A;
		case 2:
			std::cout << "B class generated" << std::endl;
			return new B;
		case 3:
			std::cout << "C class generated" << std::endl;
			return new C;
		default:
			return NULL;
	}
}

void identify(Base* p) {
	try {
		A a = dynamic_cast<A &>(*p);
		std::cout << "1: A" << std::endl;
	} catch (std::exception& e) {
		try {
			B b = dynamic_cast<B &>(*p);
			std::cout << "1: B" << std::endl;
		} catch (std::exception& e) {
			std::cout << "1: C" << std::endl;
		}
	}
}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "2: A" << std::endl;
	} catch (std::exception& e) {
		try {
			B b = dynamic_cast<B &>(p);
			std::cout << "2: B" << std::endl;
		} catch (std::exception& e) {
			std::cout << "2: C" << std::endl;
		}
	}
}

int main() {
	Base *cla = generate();
	if (!cla)
		return (0);
	std::cout << std::endl << "Result: " << std::endl;
	identify(cla);
	identify(*cla);
	delete cla;
}
