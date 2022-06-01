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

Cat::Cat(const Cat &other) : AAnimal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

Cat::~Cat() {
	std::cout << "Default Cat destructor called" << std::endl;
	delete brain;
}

//overrided methods
void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

void Cat::print_idea(int ind) {
	if (ind < 0 || ind > 99)
		std::cout << "Not existing index" << std::endl;
	else if (brain->getIdeas()[ind].empty())
		std::cout << "This idea was not created yet" << std::endl;
	else
		std::cout << "Idea №" << ind  << " ["<< brain->getIdeas()[ind] << "]" << std::endl;
}

void Cat::set_animal_idea(int ind, const std::string &idea) {
	if (ind < 0 || ind > 99)
		std::cout << "You should choose idea number from 0 to 99" << std::endl;
	brain->setIdeas(ind, idea);
}

const std::string &Cat::getType() const {
	return type;
}

//overloading

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	delete brain;
	brain = new Brain(*other.brain);
	type = other.type;
	return (*this);
}




