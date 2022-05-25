//
// Created by Anton on 25/05/2022.
//

#include "Animal.hpp"

void Animal::makeSound() const{
	std::cout << "animal sound" << std::endl;
}

Animal::Animal() {
	type = "Animal";
	std::cout << "default animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "default animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

Animal::Animal(const Animal &other) {
	this->type = other.type;
}

const std::string &Animal::getType() const {
	std::cout << "Animal get type called" << std::endl;
	return type;
}