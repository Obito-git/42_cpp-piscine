//
// Created by Anton on 25/05/2022.
//

#include "Animal.hpp"

void Animal::makeSound() const{
	std::cout << "animal sound" << std::endl;
}

Animal::Animal() {
	std::cout << "default animal constructor called" << std::endl;
	type = "Animal";
}

Animal::~Animal() {
	std::cout << "default animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Assignment operator called" << std::endl;
	brain = other.brain;
	type = other.type;
	return (*this);
}

Animal::Animal(const Animal &other) {
	type = other.type;
	brain = other.brain;
}

const std::string &Animal::getType() const {
	std::cout << "Animal get type called" << std::endl;
	return type;
}

Brain *Animal::getBrain() const {
	return NULL;
}
