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

Cat::Cat(AAnimal &other) {
	std::cout << "Copy dog constructor called" << std::endl;
	brain = new Brain(*other.getBrain());
	type = other.getType();
}

Cat &Cat::operator=(const AAnimal &other) {
	std::cout << "Cat assigment operator called" << std::endl;
	type = other.getType();
	brain = other.getBrain();
	return (*this);
}

const std::string &Cat::getType() const {
	std::cout << "Cat getype called" << std::endl;
	return type;
}

