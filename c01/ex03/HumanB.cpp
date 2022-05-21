#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) :_name(name) {
	_weapon = NULL;
}

void HumanB::attack() {
	if (_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() <<std::endl;
	else
		std::cout << this->_name << " Can't attack without weapon" <<std::endl;
}

const std::string &HumanB::getName() const {
	return _name;
}

void HumanB::setName(const std::string &name) {
	_name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
