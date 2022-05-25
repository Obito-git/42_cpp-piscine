//
// Created by Anton on 25/05/2022.
//

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const{
	std::cout << "Wrong animal sound" << std::endl;
}

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "default WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	this->type = other.type;
}

const std::string &WrongAnimal::getType() const {
	std::cout << "WrongAnimal get type called" << std::endl;
	return type;
}