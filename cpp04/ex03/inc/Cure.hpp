//
// Created by amyroshn on 5/26/22.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};


#endif //EX03_CURE_HPP
