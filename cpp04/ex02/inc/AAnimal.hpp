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
	virtual ~AAnimal();
	virtual AAnimal &operator=(const AAnimal &other) = 0;
	virtual void makeSound() const = 0;
	const std::string &getType() const;
};


#endif //EX00_ANIMAL_HPP
