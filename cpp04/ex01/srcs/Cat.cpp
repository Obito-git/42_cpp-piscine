//
// Created by Anton on 25/05/2022.
//

#include "Cat.hpp"

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called" << std::endl;
	delete brain;
}

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
	brain = new Brain;
	type = "Cat";
}

Brain *Cat::getBrain() const {
	return brain;
}

