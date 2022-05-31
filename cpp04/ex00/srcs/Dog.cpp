//
// Created by Anton on 25/05/2022.
//

#include "Dog.hpp"

//constructors / destructors

Dog::Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Default dog destructor called" << std::endl;
}

//methods

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

//overloading

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}
