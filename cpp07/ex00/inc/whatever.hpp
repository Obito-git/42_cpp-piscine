//
// Created by amyroshn on 6/7/22.
//

#ifndef EX00_TEMP_HPP
#define EX00_TEMP_HPP
template<typename T>
void swap(T& x, T& y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T &min(T& x, T&y) {
	return (y <= x ? y : x);
}

template<typename T>
T &max(T& x, T&y) {
	return (y >= x ? y : x);
}

#endif //EX00_TEMP_HPP
