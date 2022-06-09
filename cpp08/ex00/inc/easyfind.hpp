//
// Created by amyroshn on 6/9/22.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP
#include <algorithm>

template <typename T>
bool easyfind (const T& t, int i) {
	return (std::find(t.begin(), t.end(), i) != t.end());
}

#endif //CPP08_EASYFIND_HPP
