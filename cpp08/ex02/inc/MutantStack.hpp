//
// Created by amyroshn on 6/9/22.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack<T>() {}
	MutantStack<T>(const MutantStack<T> &other) { *this = other; }
	~MutantStack<T>() {}
	MutantStack<T>	&operator=( const MutantStack<T> &other) {
		*this = other;
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
};


#endif //EX02_MUTANTSTACK_HPP
