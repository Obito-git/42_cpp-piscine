//
// Created by amyroshn on 5/26/22.
//

#include "Cure.hpp"

AMateria *Cure::clone() const {
	return new Cure;
}

void Cure::use(ICharacter &target) {
	AMateria::use(target);
}

Cure::Cure() {
	_type = "cure";
}
