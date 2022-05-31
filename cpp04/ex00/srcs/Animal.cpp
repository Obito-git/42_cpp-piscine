//
// Created by Anton on 25/05/2022.
//

#include "Animal.hpp"
//Constructors/Destructors

Animal::Animal() {
	std::cout << "default animal constructor called" << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal &other) {
	std::cout << "Copy animal constructor called" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << "default animal destructor called" << std::endl;
}

//methods

void Animal::makeSound() const{
	std::cout << "animal sound" << std::endl;
}

const std::string &Animal::getType() const {
	std::cout << "Animal get type called" << std::endl;
	return type;
}

//overloading
Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}