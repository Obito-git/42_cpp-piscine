//
// Created by Anton on 25/05/2022.
//

#include "Cat.hpp"

//Constructors / destructors

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
	brain = new Brain;
	type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called" << std::endl;
	delete brain;
}

//methods
void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

//overloading

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}
