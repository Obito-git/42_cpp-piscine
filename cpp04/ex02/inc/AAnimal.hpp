//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal {
protected:
	std::string type;
public:
	//destructor
	virtual ~AAnimal();

	//methods
	virtual void makeSound() const = 0;
	virtual void print_idea(int ind) = 0;
	virtual void set_animal_idea(int ind, const std::string &idea) = 0;
	virtual const std::string &getType() const = 0;
};


#endif //EX00_ANIMAL_HPP
