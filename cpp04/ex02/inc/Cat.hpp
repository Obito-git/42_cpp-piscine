//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include "AAnimal.hpp"

class Cat : public AAnimal{
private:
	Brain *brain;
public:
	Cat();
	Cat(AAnimal &other);
	~Cat();

	virtual Brain *getBrain() const;
	virtual Cat &operator=(const AAnimal &other);
	virtual const std::string &getType() const;
	virtual void makeSound() const;

};


#endif //EX00_CAT_HPP
