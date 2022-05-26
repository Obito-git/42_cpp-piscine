//
// Created by amyroshn on 5/26/22.
//

#include "AMateria.hpp"

std::string const &AMateria::getType() const {
	return _type;
}

AMateria::AMateria(const std::string &type) {
	this->_type = type;
}

AMateria::AMateria() {}

void AMateria::use(ICharacter &target) {
	if (getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
