//
// Created by Anton on 25/05/2022.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain &other) {
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < Brain::IDEAS_COUNT; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain() {
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other){
	if (this == &other)
		return *this;
	std::cout << "Assignment operator Brain called" << std::endl;
	for (int i = 0; i < Brain::IDEAS_COUNT; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

const std::string *Brain::getIdeas() const {
	return ideas;
}

void Brain::setIdeas(int ind, const std::string &idea) {
	if (ind >= 0 && ind < IDEAS_COUNT)
		ideas[ind] = idea;
}
