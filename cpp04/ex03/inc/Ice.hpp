//
// Created by amyroshn on 5/26/22.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	virtual AMateria *clone() const;

	Ice();

	virtual void use(ICharacter &target);
};


#endif //EX03_ICE_HPP
