//
// Created by amyroshn on 6/7/22.
//
#include "iter.hpp"
#include <iostream>


int main()
{
	std::cout << std::endl << "INT ARRAY * 2 TEST" << std::endl;
	int arr[] = {1,2,3,4,5};
	print_arr(arr, 5, "Before");
	iter(arr, 5, two_multiply);
	print_arr(arr, 5, "After");

	std::cout << std::endl << "DOUBLE ARRAY * 2 TEST" << std::endl;
	double arr2[] = {42.5, 50, 99.9};
	print_arr(arr2, 3, "Before");
	iter(arr2, 3, two_multiply);
	print_arr(arr2, 3, "After");

	std::cout << std::endl << "CHAR ARRAY / 2 TEST" << std::endl;
	char arr3[] = {104, 100};
	print_arr(arr3, 2, "Before");
	iter(arr3, 2, ::two_devision);
	print_arr(arr3, 2, "After");
}
