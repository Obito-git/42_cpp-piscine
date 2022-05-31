//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
public:
	//constructors / destructors
	Dog();
	Dog(const Dog &other);
	virtual ~Dog();

	//methods
	virtual void makeSound() const;

	//overloading
	Dog& operator=(const Dog& other);
};


#endif //EX00_DOG_HPP
