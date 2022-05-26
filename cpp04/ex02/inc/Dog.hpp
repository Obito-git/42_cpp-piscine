//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include "AAnimal.hpp"

class Dog : public AAnimal{
private:
	Brain *brain;
public:
	Dog();
	Dog(AAnimal &other);
	~Dog();

	virtual void makeSound() const;
	virtual Brain *getBrain() const;
	virtual const std::string &getType() const;
	virtual Dog &operator=(const AAnimal &other);
};


#endif //EX00_DOG_HPP
