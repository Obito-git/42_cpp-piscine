//
// Created by Anton on 25/05/2022.
//

#include "Dog.hpp"

//constructors / destructors

Dog::Dog() {
	std::cout << "Default dog constructor called" << std::endl;
	brain = new Brain;
	type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

Dog::~Dog() {
	std::cout << "Default dog destructor called" << std::endl;
	delete brain;
}

//methods

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

void Dog::print_idea(int ind) {
	if (ind < 0 || ind > 99)
		std::cout << "Not existing index" << std::endl;
	else if (brain->getIdeas()[ind].empty())
		std::cout << "This idea was not created yet" << std::endl;
	else
		std::cout << "Idea №" << ind  << " ["<< brain->getIdeas()[ind] << "]" << std::endl;
}

void Dog::set_animal_idea(int ind, const std::string &idea) {
	if (ind < 0 || ind > 99)
		std::cout << "You should choose idea number from 0 to 99" << std::endl;
	brain->setIdeas(ind, idea);
}


//overloading

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	delete brain;
	brain = new Brain(*other.brain);
	type = other.type;
	return (*this);
}
