//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	void makeSound() const;
	~WrongCat();
};


#endif //EX00_CAT_HPP
