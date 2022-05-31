//
// Created by Anton on 25/05/2022.
//

#include "WrongAnimal.hpp"
//constructors / destructors

WrongAnimal::WrongAnimal() {
	std::cout << "default WrongAnimal constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "default WrongAnimal destructor called" << std::endl;
}

//methods
void WrongAnimal::makeSound() const{
	std::cout << "Wrong animal sound" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	std::cout << "WrongAnimal get type called" << std::endl;
	return type;
}

//overloading
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Wrong animal assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}