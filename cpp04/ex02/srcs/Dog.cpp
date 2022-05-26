//
// Created by Anton on 25/05/2022.
//

#include "Dog.hpp"

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

Dog::~Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	delete brain;
}

Dog::Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	brain = new Brain;
	type = "Dog";
}

Brain *Dog::getBrain() const {
	return brain;
}
