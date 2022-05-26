//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
private:
	Brain *brain;
public:
	Brain *getBrain() const;
	Cat();
	void makeSound() const;
	~Cat();
};


#endif //EX00_CAT_HPP
