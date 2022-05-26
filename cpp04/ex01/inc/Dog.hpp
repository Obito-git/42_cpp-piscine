//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
private:
	Brain *brain;
public:
	Brain *getBrain() const;
	Dog();
	void makeSound() const;
	~Dog();
};


#endif //EX00_DOG_HPP
