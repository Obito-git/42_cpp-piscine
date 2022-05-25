//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal &operator=(const Animal &other);

	virtual void makeSound() const;

	const std::string &getType() const;
};


#endif //EX00_ANIMAL_HPP
