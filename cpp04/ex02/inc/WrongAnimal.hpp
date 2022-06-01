//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	//constructors / destructors
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	//methods
	void makeSound() const;
	const std::string &getType() const;

	//overloading
	WrongAnimal &operator=(const WrongAnimal &other);
};


#endif
