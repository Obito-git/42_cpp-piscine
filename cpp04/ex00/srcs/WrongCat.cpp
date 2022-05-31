//
// Created by Anton on 25/05/2022.
//

#include "WrongCat.hpp"

//constructors/destructors

WrongCat::WrongCat() {
	std::cout << "Default WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
	std::cout << "Wrong cat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

//methods
void WrongCat::makeSound() const{
	std::cout << "Wrong Meow" << std::endl;
}

//overloading

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

