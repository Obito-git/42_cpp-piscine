//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
private:
	Brain *brain;
public:
	Brain *getBrain() const;
	Dog();
	void makeSound() const;
	~Dog();
};


#endif //EX00_DOG_HPP
