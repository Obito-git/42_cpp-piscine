//
// Created by amyroshn on 6/7/22.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <cstdlib>
#include <iostream>

template <typename T>
void two_multiply(T &i) {
	i = i * 2;
}

template<typename T>
void two_devision(T &i) {
	i = i / 2;
}

template <typename T>
void iter (T* a, int size, void (*f)(T&)) {
	for (int i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void iter (const T* a, int size, void (*f)(const T&)) {
	for (int i = 0; i < size; i++)
		f(a[i]);
}

template <typename T>
void print_arr(T* a, int size, const char *msg) {
	std::cout << msg << std::endl;
	for (int i = 0; i < size; i++)
		std::cout << *(a + i) << " ";
	std::cout << std::endl;
}
#endif //EX01_ITER_HPP
