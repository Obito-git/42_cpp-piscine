//
// Created by Anton on 25/05/2022.
//

#include "AAnimal.hpp"
//Constructors/Destructors

AAnimal::~AAnimal() {
	std::cout << "default animal destructor called" << std::endl;
}

AAnimal::AAnimal() {
	std::cout << "default animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "Copy animal constructor called" << std::endl;
	this->type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}