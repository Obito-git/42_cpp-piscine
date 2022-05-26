//
// Created by Anton on 25/05/2022.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other){
	std::cout << "Assignment operator Brain called" << std::endl;
	for (int i = 0; i < Brain::_IDEAS_COUNT; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

Brain::Brain(const Brain &other) {
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < Brain::_IDEAS_COUNT; i++)
		ideas[i] = other.ideas[i];
}
