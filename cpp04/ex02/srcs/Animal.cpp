//
// Created by Anton on 25/05/2022.
//

#include "AAnimal.hpp"

AAnimal::~AAnimal() {
	std::cout << "default animal destructor called" << std::endl;
}

const std::string &AAnimal::getType() const {
	std::cout << "AAnimal get type called" << std::endl;
	return type;
}