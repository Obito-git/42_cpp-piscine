//
// Created by Anton on 25/05/2022.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	void makeSound() const;
	WrongCat& operator=(const WrongCat& other);
	~WrongCat();
};


#endif //EX00_CAT_HPP
