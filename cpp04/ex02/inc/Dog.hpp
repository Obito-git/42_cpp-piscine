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
	//constructors / destructors
	Dog();
	Dog(const Dog &other);
	virtual ~Dog();

	//overrided methods
	void print_idea(int ind);
	void set_animal_idea(int ind, const std::string &idea);
	void makeSound() const;
	const std::string &getType() const;

	//overloading
	Dog& operator=(const Dog& other);
};


#endif //EX00_DOG_HPP
