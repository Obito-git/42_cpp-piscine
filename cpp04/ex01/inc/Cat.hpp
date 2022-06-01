//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain *brain;
public:
	//constructors/destructors
	Cat();
	Cat(const Cat &other);
	virtual ~Cat();

	//methods
	virtual void makeSound() const;
	void print_idea(int ind);
	void set_animal_idea(int ind, const std::string &idea);

	//overloading
	Cat& operator=(const Cat& other);
};


#endif //EX00_CAT_HPP
