//
// Created by amyroshn on 5/26/22.
//

#include "Ice.hpp"

AMateria *Ice::clone() const {
	return new Ice;
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
}

Ice::Ice() {
	_type = "ice";
}
