//
// Created by Anton on 25/05/2022.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	brain = new Brain;
	type = "Dog";
}

Dog::Dog(AAnimal &other) {
	std::cout << "Copy dog constructor called" << std::endl;
	brain = new Brain(*other.getBrain());
	type = other.getType();
}

Dog::~Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

const std::string &Dog::getType() const {
	std::cout << "Dog getype called" << std::endl;
	return type;
}

Brain *Dog::getBrain() const {
	return brain;
}

Dog &Dog::operator=(const AAnimal &other) {
	std::cout << "Dog assigment operator called" << std::endl;
	type = other.getType();
	brain = other.getBrain();
	return (*this);
}