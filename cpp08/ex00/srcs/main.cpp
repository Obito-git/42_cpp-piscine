//
// Created by amyroshn on 6/9/22.
//
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	std::vector<int> test(10);
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);
	std::cout << (easyfind(test, 1) ? "ok" : "not ok") << std::endl;
	std::cout << (easyfind(test, 6) ? "ok" : "not ok")  << std::endl << std::endl;

	std::list<int> test2(10);
	test2.push_back(1);
	test2.push_back(2);
	test2.push_back(3);
	test2.push_back(4);
	test2.push_back(5);

	std::cout << (easyfind(test2, 1) ? "ok" : "not ok") << std::endl;
	std::cout << (easyfind(test2, 6) ? "ok" : "not ok")  << std::endl << std::endl << std::endl;
}