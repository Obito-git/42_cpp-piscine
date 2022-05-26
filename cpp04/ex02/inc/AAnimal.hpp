//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal {
protected:
	std::string type;
public:
	virtual ~AAnimal() = 0;
	virtual void makeSound() const = 0;
	virtual Brain *getBrain() const = 0;
	virtual AAnimal &operator=(const AAnimal &other) = 0;
	virtual const std::string &getType() const = 0;
};


#endif //EX00_ANIMAL_HPP
