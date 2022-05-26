//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
private:
	Brain *brain;
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal &operator=(const Animal &other);

	virtual void makeSound() const;
	virtual 	Brain *getBrain() const;

	const std::string &getType() const;
};


#endif //EX00_ANIMAL_HPP
