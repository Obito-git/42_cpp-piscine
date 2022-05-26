//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
private:
	Brain *brain;
public:
	Brain *getBrain() const;

	AAnimal &operator=(const AAnimal &other) override;

	Cat();
	void makeSound() const;
	~Cat();
};


#endif //EX00_CAT_HPP
