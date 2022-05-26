//
// Created by Anton on 25/05/2022.
//

#include "WrongCat.hpp"

void WrongCat::makeSound() const{
	std::cout << "Wrong Meow" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

